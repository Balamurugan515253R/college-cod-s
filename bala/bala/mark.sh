echo “Enter 3 Subject marks of a student:”
read s1 s2 s3
sum1=`expr $s1 + $s2 + $s3`
echo “Sum of 3 subjects are:” $sum1
per=`expr $sum1 / 3`
echo “Percentage is :” $per
if [ $per -ge 75 ]
then
   echo “Distinction”
elif [ $per -ge 60 -a $per -lt 75  ]
then
   echo “First Class”
elif [ $per -ge 40 -a $per -lt 59 ]
then
   echo "second class"
else
   echo "fail"
fi
