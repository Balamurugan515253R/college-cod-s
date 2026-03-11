T=input("enter the state of temperature :")
H=input("enter the state of humidity :")
if(T=="warm" or T=="cold" and H=="dry" or H=="humid"):
   if(T=="warm" and H=="dry"):
      print("PLAY BASKET BALL")
   elif(T=="warm" and H=="humid"):
      print("PLAY TENNIS")
   elif(T=="cold" and H=="dry"):
      print("PLAY CRICKET")
   elif(T=="cold" and H=="humid"):
      print("YOU CAN SWIM")
else:
   print("invalid")
	 
