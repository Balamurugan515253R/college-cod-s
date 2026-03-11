a=int(input("enter a="))
b=int(input("enter b="))
c=int(input("enter c="))
def max():
   if(a>b and a>c):
      print("a is maximum, a=",a)
   elif(b>a and b>c):
      print("b is maximum, b=",b)
   else:
      print("c is maximum, c=",c)
max()

