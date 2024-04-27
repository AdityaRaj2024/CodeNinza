n=int(input("Enter number of terms : "))
a=0
b=1
print("fibanocci series up to ",n,"terms")
print(a,b,end=" ")
for i in range (1,n-1):
    f=a+b
    print(f,end=' ')
    a=b
    b=f