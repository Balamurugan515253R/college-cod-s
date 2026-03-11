#!/bin/bash
echo "entre string1"
read str1
echo "entre string2"
read str2
if [ $str1 == $str2 ]
then
   echo "equal"
else
   echo "unequal"
fi

