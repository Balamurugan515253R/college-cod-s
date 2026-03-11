def facto(n):
   if(n<0):
      print("invalid input")
   else:
      fact=1
      for i in range(2,n+1):
	 fact=fact*i
   print"factorial =",fact
facto(5)	 


