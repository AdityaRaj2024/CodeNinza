a=[ ]
sum=0
print("Enter 5 Numbers :")
for i in range(5):
      x=int(input())
      a.append(x)
print("Elements Are :")
for s in a :
    print(s,end=" ")
    sum=sum+s
print("\n")
print("list is :",a)
print("\nSum Of 5 Numbers are :",sum) 