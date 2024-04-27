print("Enter Elements :")
n=[ ]
for i in range(5):
    n.append(int(input( )))
print(n)
for i in range(5):
    for j in range(i+1,5):
        if(n[i]>n[j]):
            t=n[i]
            n[i]=n[j]
            n[j]=t
print("sorted list is :",n)