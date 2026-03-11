a=set()
b=set()
for i in range(1,11):
   a.add(i*i)
   b.add(i*i*i)
print("set1:",a)
print("set2:",b)
c={200,300}
print("new set3:",c)
a.update(c)
print("the ubdsted set1:",a)
a.pop()
print("after poping set1:",a)
a.add(500)
print("after adding 500 set1:",a)
b.clear()
print("afterclearing set2:",b)
a.remove(200)
print("after removing 200 set1:",a)



