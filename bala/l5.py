r=int(input("enter no of rows:"))
c=int(input("enter no of columns:"))
mat=[]
for i in range(r):
   row=[]
   for j in range(c):
      val=int(input("Value:"))
      row.append(val)
   mat.append(row)
print(mat)
transpose = [[row[i] for row in mat] for i in range(len(mat[0]))]
print("after transposing:")
print(transpose)
