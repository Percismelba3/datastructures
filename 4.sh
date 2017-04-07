#!/bin/bash
echo "The kernal version is"
uname -v
echo "os is "
uname -o
echo "The release no: is "
uname -r
echo "The available shells" #use cat /etc/shells interminal

echo "To get mouse setting"  #xinput in terminal, then do man xinput
xinput --list 9
echo "show computer CPU information" 
lscpu  #indetail to know about cpu information is we use cat /proc/cpuinfo and hard info
echo "TO show memory information"
vmstat         #other commands are cat/proc/memoryinfo and free -h
echo "show hard disk informationj"
lsblk


