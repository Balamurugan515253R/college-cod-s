echo "Enter the filename to be compared"
read file1
read file2
if diff $file1 $file2 > /dev/null;
then
      echo " Files are identical and so deleting the second file"
         rm $file2
      else
	    echo "Files are not same"
	 fi
