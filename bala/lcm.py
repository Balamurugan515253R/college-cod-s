a=int(input("enter the no 1 :"))
b=int(input("enter the no 2 :"))
if(a>b):
   num=a
else:
   num=b
   while(True):
      if(num%a==0 and num%b==0):
	 lcm=num
	 break
      num=num+1
print("lcm of given no is : ",lcm)
