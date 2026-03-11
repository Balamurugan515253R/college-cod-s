i=“y”
while [ $i = “y” ]
do
   echo “Enter you Basic:”
   read basic
   echo “Pay Slip Details:”
   echo “1. House Rent Allowance:”
   echo “2. Dearness Allowance:”
   echo “3. Provident Fund:”
   echo “Enter your Choice:”
   read ch
   case $ch in
      1) hra=`expr $basic \* 20 / 100`
	 echo Your HRA is Rs. $hra;;
      2) da=`expr $basic \* 40 / 100`
	 echo Your DA is Rs. $da;;
      3) pf=`expr $basic \* 10 / 100`
	 echo Your PF is Rs. $pf;;
      *) echo “Not a valid Choice”;;
   esac
   echo “Do you want to Continue?:”
   read i
   if [ $i != “y” ] 
   then
      exit
   fi
done
