n=int(input("enter count:"))
l=n-1
for i in range(1,n+1):
   print(l*" "+i*"* ")
   l=l-1
l=n-1
for i in range(1,n+1):
 print(i*" "+l*"* ")
 l=l-1
