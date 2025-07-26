n=int(input("Enter no. of elements: "))
s=[]
c=0
for i in range(n):
    e=float(input("Enter element: "))
    s.append(e)
    c+=e
print(s)
print(c)