odd=set()
for i in range(1,21,2):
   odd.add(i)
print("odd set:",odd)
def is_prime(n):
   if n<=1:
      return False
   for i in range(2,int(n**0.5)+1):
      if n%i==0:
	 return False
      return True
prime={x for x in range(1,21) if is_prime(x)}
print("prime set:",prime)
print("union:",prime.union(odd))
print("intersection:",prime.intersection(odd))
print("difference:",prime.difference(odd))
print("symmetric difference:",prime.symmetric difference(odd))


