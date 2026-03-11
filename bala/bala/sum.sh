echo "entre the n numbers"
read n
i=1
sum=0
echo "entre the n number"
while [ $i -le $n ]
do
   read num
   sum=$(($sum+$num))
   i=$(($i+1))
done
echo "sum of n numbers is:$sum"

