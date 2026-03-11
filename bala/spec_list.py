a=int(input("enter the range:"))
step=int(input("enter step:"))
i=int(0)
list=[]
while(i<a):
   list.append(i)
   i=i+step
   print("list is:",list[::-1])

