def getinp():
   d={}
   n=int(input("no of element:"))
   for i in range(1,n+1):
         key=input("key:")
         value=input("value:")
         d[key]=value
   return d

d1=getinp()
d2=getinp()
d1.update(d2)
print(d1)
def check(d1):
   x=input("enter a key to check:")
   if x in d1:
      print("key exists")
   else:
      print("key not found")
check(d1)
check(d1)	
