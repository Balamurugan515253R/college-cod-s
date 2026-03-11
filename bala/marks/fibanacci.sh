#!/bin/bash
echo "how many numbers of terms to be generated?"
read num
x=0
y=1
i=2
echo "fibanacci series upto $num terms"
echo "$x"
echo "$y"
while [ $i -lt $num ]
do
i=`expr $i + 1`
z=`expr $x + $y`
echo "$z"
x=$y
y=$z
done

