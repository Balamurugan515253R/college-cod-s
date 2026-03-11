n=str(input("enter comma separated binary number:"))
t=","
x=n.split(t)
l=[]
print(x)
for i in x:
   if int(i,2)%5==0:
     l.append(i)
print("The binary numbers divisible by 5 are:")
print(l)
