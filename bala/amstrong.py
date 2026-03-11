sum=0
a=int(input("enter the no :"))
b=a
while(b!=0):
   c=b%10
   sum=sum+(c**3)
   b=b/10
if(a==sum):
   print("armstrong number")
else:
   print("not a armstrong number")

