echo "Enter First Number:"
read no
echo "Enter the Number for power:"
read power

counter=0
ans=1
while [ $power -ne $counter ]
do
   ans=`expr $ans \* $no`
   counter=`expr $counter + 1`
done

echo "$no Power of $power is: $ans"

