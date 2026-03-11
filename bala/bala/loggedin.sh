cat /etc/passwd>user.txt
set `wc -l user.txt`
log=`who | wc -l`
echo "There are $l users in network"
echo "There are $log user currently logged in"

