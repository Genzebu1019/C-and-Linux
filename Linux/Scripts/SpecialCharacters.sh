#! /bin/bash

NAME="Semere"
echo "$NAME"
unset "$NAME"
echo "Unset: $NAME"

#pipe
ls -l | wc

#input redirection
touch fileList.txt
ls -l > fileList.txt
cat fileList.txt

#grep PATH from evn
env | grep PATH

alias lf='ls -alF'


ls -l Parsefile.sh

#Call Parsefile
./Parsefile.sh
