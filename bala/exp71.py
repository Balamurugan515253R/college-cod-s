d={}
n=int(input("enter no of elements:"))
for i in range(n):
   key=input("Key:")
   value=input("value:")
   d[key]=value
a=list(d.items())
for j in range(len(a)):
   for i in range(len(a)-1):
    if a[i][1] > a[i+1][1]:
      temp=a[i]
      a[i]=a[i+1]
      a[i+1]=temp
b=dict(a)
print("ascending order:",b)
def add(b):
   key=input("key:")
   value=input("value:")
   b[key]=value
add(b)
print("after adding:",b)
b1=list(b.items())
for j in range(len(b1)):
 for i in range(len(b1)-1):
  if b1[i][1] < b1[i+1][1]:
   temp=b1[i]
   b1[i]=b1[i+1]
   b1[i+1]=temp
print("decending order:",dict(b1))
