#!/bin/sh
echo "how many no of terms tobe generated:"
read n
x=0
y=1
i=2
echo "fibonacci series up to $ n terms"
echo "$x"
echo "$y"
while [ $i -lt $n ]
do
   i=$((i+1))
   z=$((x+y))
   echo "$y"
   x=$y
   y=$z
done
