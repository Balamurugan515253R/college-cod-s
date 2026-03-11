list1=[int(i) for i in input("enter first list:").split()]
list2=[int(i) for i in input("enter second list:").split()]
if(len(list1) and len(list2) ==0):
   print("list is empty")
def common(list1,list2):
   com=[i for i in list1 if i in list2]
   if(len(com)==0):
      print("No common elements")
   else:
      print("there is atleast one common element")
      return(True)
def remove(list1,n):
   list1.remove(n)
   print(list1)
def add(list1,list2):
   s=[]
   for i in range(len(list1)):
    for j in range(len(list2)):
     if((list1[i]+list2[j])>40):
      list3=[list1[i],list2[j]]
      s.append(list3)
   print("pairs greater than 40 are")
   print(s)

common(list1,list2)
n=int(input("enter  no to remove:"))
print("after removing no from list1")
remove(list1,n)
add(list1,list2)
