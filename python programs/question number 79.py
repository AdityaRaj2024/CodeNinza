m1=[ ]
m2=[ ]
m3=[ ]
r=int(input("Enter Row Size : "))
for i in range(r):
    m1.append([ ])
    m2.append([ ])
    m3.append([ ])
c=int(input("Enter Column Size : "))
print("Enter Value For First Matrix : ")
for i in range(r):
    for j in range (c):
        m1[i].append(int(input( )))
print("Enter Value For Second Matrix : ")
for i in range(r):
    for j in range (c):
        m2[i].append(int(input( )))
print('First Matrix Is :')
for m in m1 :
    for n in m :
        print(n,end="\t")
    print( )
print('Second Matrix Is :')
for m in m2 :
    for n in m :
        print(n,end="\t")
    print( )
print("Added Matrix Is :")
for i in range(r):
    for j in range(c):
        m3[i].append(m1[i][j]+m2[i][j])
        print(m3[i][j],end="\t")
    print( )