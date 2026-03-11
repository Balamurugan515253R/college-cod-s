echo "entre a 5 digit number"
read num
n=1
echo "odd numbers are"
while [ $n -le 5 ]
do
   a=`echo $num |cut -c $n`
   echo $a
   n=`expr $n + 2`
done

