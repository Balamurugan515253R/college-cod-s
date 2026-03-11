#!/bin/bash
echo "menu"
echo "1.lower to upper
2.upper to lower
3.quit"
echo "entre your choice"
read ch
case "$ch" in
   1) echo "entre file "
      read f1
      if [ -f$f1 ]
      then
	 echo "converting lower case to upper case"
	 tr '[a-z]' '[A-Z]' < $f1
      else
	 echo "$f1 does not exists"
      fi
      ;;
   2) echo "entre the file read file"
      read f1
      if [ -f$f1 ]
      then
	 echo "converting upper case to lower case"
	 tr '[A-Z]' '[a-z]' < $f1
      else
	 echo "$f1 file does not exists"
      fi
      ;;
   3) echo "exit..."
      exit;;
esac

