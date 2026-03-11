echo "Enter the filename"
read file1
filesize=$(ls -lh "$file1" | awk '{print $5}')
if ((filesize > 100))
then
       echo "The filesize is greater than 100"
    else
           echo "$file1 has a size of $filesize"
	fi
