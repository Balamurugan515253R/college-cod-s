d={}
n=int(input("enter range:"))
for i in range(1,n+1):
   d[i]=i**2
print(d)
a=d.values()
print("sum:",sum(a))
