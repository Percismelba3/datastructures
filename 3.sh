#!/bin/bash
echo "The logged user and its logname"
echo $USER  #whoami ,users
echo $LOGNAME  #logname 
echo "The current shell"
echo $shell
echo "The home directory"
echo $HOME
echo "The operating system type is: "
echo $OSTYPE  #uname -o , ostype
echo "Current path setting is  "
echo $PATH
echo "Current working directory"
echo $PWD
echo "Currently logged number of users"
echo $users   #w,who any of the two can be used 

