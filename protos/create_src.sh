#!/bin/sh
find ./ -name *.h|xargs -i rm -f {}
find ./ -name *.cc|xargs -i rm -f {}
for i in `ls ./|grep -vE "create|Makefile"`
do  
  echo $i
  mkdir -p ../gens/src/$i
  mkdir -p ../gens/include/$i;
  for j in `ls $i/|grep -v istio`
   do   
     protoc -I=. --cpp_out=.  ./$i/$j; 
	 if [ "$i" != "common" ]
	 then
	   protoc -I=.  --grpc_out=. --plugin=protoc-gen-grpc=/home/lyy/grpc/bins/opt/grpc_cpp_plugin ./$i/$j
     fi
	 cp -f $i/*.h ../gens/include/$i
	 cp -f $i/*.cc ../gens/src/$i
   done 
done
