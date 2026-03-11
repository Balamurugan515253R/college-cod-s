a=int(input("enter the value of a :"))
b=int(input("enter the value of b :"))
c=int(input("enter the value of c :"))
x=(b*b)-(4*a*c)
y=-b/(2*a)
if(x>0):
   print("roots are real and distinct")
   d=y+((x**0.5)/(2*a))
   e=y-((x**0.5)/(2*a))
   print("the roots are:",d,e)
elif(x<0):
   print("the roots are real and imaginery")
   f=((-x)**0.5)/(2*a)
   print("root 1 =",y,"+j",f)
   print("root 1 =",y,"-j",f)
else:
   print("root =", y)

