a=int(input("enter the value:"))
def primefact(n):
   i=2
   while(n!=0):
      if(n%i==0):
	 print(i)
	 n=n//i
      else:
	 i=i+1
      if(a==1):
         print("1")
      else:
         primefactor(a)

