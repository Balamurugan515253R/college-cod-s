echo "The name of all files having all permissions :"
read file1
# check if it has all permissions
if [ -r $file1 ]
   # if you want to check for all permissions like read, write and execute use this if [ -r $file1 -a -w $file1 -a -x $file1 ] also change the file permission using chmod command for this
then
   # use the compress command we used to compress the file

   # closing first if statement
fi
