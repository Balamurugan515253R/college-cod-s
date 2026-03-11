def add():
   d={}
   n=int(input("enter no of elements:"))
   for i in range(n):
      key=input("key:")
      value=input("value:")
      d[key]=value
   return d
d1=add()
print("dict1:",d1)
d2=add()
print("dict2:",d2)
m2= {**d1,**d2}
print("unpacking method:",m2)
x=d1
y=d2
x.update(y)
print("update method:",x)
k1=list(d2.keys())
k2=list(d2.values())
for i in range(len(k1)):
   d1[k1[i]]=k2[i]
print("Merged using for loop:",d1)
