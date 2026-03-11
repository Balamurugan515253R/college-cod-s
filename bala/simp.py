p=int(input("enter the principle amount :"))
r=int(input("enter the rate of intrest :"))
n=int(input("enter the no of years :"))
t=int(input("enter the value of t :"))
si=(p*n*r)/100
print("simple intrest =",si)
a=p*(1+((r/n)/100))**(n*t)
ci=a-p
print("compound intrest =",ci)

