echo "entre the year"
read year
if [ $year -ge 1000 -a $year -le 9999 ]
then
   echo "the year $year is a leap year"
else
   echo "the $year is not aleap year"
fi

