def prime(n):
   if(n==2):
      return 1
   else:
      for i in range(2,n):
         if(n%i==0):
            flag=1
            break
         flag=0
      if(flag==0):
         return 1
      else:
         return 0
def pf(a):
   for i in range(2,a+1):
      if(a%i==0):
         y=prime(i)
         if(y==1):
            print(i)
b=int(input("enter a number "))
print("the prime factors are")
pf(b)
