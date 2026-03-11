ch=int(input("enter the choice for sidesenter 0 for length,breadth enter 1    "))
if(ch==0):
   a=float(input("enter the side 1:"))
   b=float(input("enter the side 2:"))
   c=float(input("enter the side 3:"))
   if(a>0 and b>0 and c>0):
      s=(a+b+c)/2
      area=(s*(s-a)*(s-b)*(s-c))**0.5
      print("area =",area)
   else:
      print("invalid input")
else:
   l=int(input("enter the length"))
   b=int(input("enter the breadth"))
   if(l>0 and b>0):
      area=(l*b)/2
      print("area =",area)
   else:
      print("invalid input")



     

