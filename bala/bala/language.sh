#!/bin/bash
echo -n "entre the name of the country"
read country
echo - "the official language of the $country is"
case $country in
   lithuania)
      echo -n "lithunian"
      ;;
   romain)
      echo -n "romiania"
      ;;
   italy)
      echo -n "italian"
      ;;
   *)
      echo -n "unknown"
      ;;
esac
