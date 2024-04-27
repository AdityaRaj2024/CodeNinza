print("Element's are : ")
mt=[[ ],[ ],[ ]]
u=0
for i in range(3):
    for j in range(4):
        mt[i].append(int(input( )))
print("matrix element's are : ")
for i in range(3):
    for j in range(4):
        print(mt[i][j],end=" ")
    print( )
for i in range(1):
    for j in range(4):
        u=u+mt[i][j]
print("sum of upper row is :",u)