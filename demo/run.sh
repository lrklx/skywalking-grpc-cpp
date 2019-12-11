#!/bin/sh
nohup ./projectC.sh >/dev/null 2>&1 &
sleep 10
nohup ./projectB.sh >/dev/null 2>&1 &
sleep 10
nohup ./projectA.sh >/dev/null 2>&1 &
sleep 10
