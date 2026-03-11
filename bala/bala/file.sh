echo –n “Enter File name:”
read fname
if [ -f $fname ]
then
   echo 'Last Modification time is'`ls -lt $fname | tr -s " " "," | cut -d "," -f8`
else
   echo "File does not exist"
fi
