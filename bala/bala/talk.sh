#!/bin/bash
echo "please talk to me"
while :
do
   read input_string in
   case $input_string in
   hello)
   echo "hello yourself"
   ;;
bye)
   echo "see you again !"
   break
   ;;
*)
   echo "sorry , i dont understand"
   ;;
   esac
done
echo "that is all floaks !"




