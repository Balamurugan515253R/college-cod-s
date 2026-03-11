n=int(input("enter a number:"))
if(n==2):
   print("prime no")
else:
  for i in range(2,n):
    if(n%2==0):
     flag=1
     break
    flag=0
  if(flag==0):
   print("prime no")
  else:
   print("not a prime no")
