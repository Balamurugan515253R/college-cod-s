n=int(input("enter the number :"))
def prime(n):
   a='true'
   for i in range(2,n):
      if(n%i==0):
	 a='false'
   if(a=='false'):
      return 0
   else:
      return 1
z=prime(n)
if(z==0):
   print("not a prime number")
else:
   print("prime number")



