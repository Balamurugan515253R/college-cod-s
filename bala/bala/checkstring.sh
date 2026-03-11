echo “Enter File Name:”
read f
echo “Enter String:”
read a
b=`grep $a $f`;
if [ $? -eq 0 ]
then
   echo “String Found”
else
   echo “Not Found”
fi
