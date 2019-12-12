Apache SkyWalking C++侵入式开发
==========


# 简介
本项目主要是根据skywalking探针协议实现的C++版本的探针,主要功能:
1.app 服务注册
2.服务实例注册
3.端点和地址注册
4.segment数据发送
5.根据headerV2协议实现跨进程carrier
6.实现跨线程快照
7.链路上下文traceContext（包括exit/entry/local 3种类型的span的创建)
8.侵入式外部调用接口ContextManager实现
9.可运行demo(demo使用grpc协议实现，模拟跨线程进程间链路数据传输过程，实际使用过程中可将链路数据放入请求头部)

