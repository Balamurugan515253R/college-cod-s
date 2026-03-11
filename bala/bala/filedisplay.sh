for File in *
do
   if [ -r $File -a -w $File -a -x $File ]
then
   echo $File
fi
done
