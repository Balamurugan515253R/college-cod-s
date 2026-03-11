#!/bin/bash
echo "entre two numbers"
read a
read b
echo "entre choice"
echo "1.addition
      2.subraction
      3.multplication
      4.division"
read ch
case $ch in
   1)res=`echo $a + $b | bc`
      ;;
   2)res=`echo $a - $b | bc`
      ;;
   3)res=`echo $a \* $b | bc`
      ;;
   4)res=`echo $a / $b | bc`
      ;;
esac
echo "result : $res"


