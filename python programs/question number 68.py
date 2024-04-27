n=[ ]
x=int(input("How many numbers to be entered ? "))
for i in range(x):
    n.append(int(input( )))
print("Non prime number's are : ")
for l in n :
    p=0
    for i in range(2,l):
        if(l%i==0):
            p=1
            break
    if(p==1):
        print(l,end=' ')