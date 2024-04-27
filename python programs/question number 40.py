#question no.40
n=int(input("Enter Any Number : "))
print("Factor of",n,"=")
for i in range (1,n+1):
    if(n%i==0):
        print(i,end =" ")