echo "The name of all files having all permissions :"
read file1
   if [ -r $file1 -a -w $file1 -a -x $file1 ]
   then
         echo "$file1 has all permissions (read, write and execute ). "
      else
	    echo "$file1 does not have all permissions"
	 fi
