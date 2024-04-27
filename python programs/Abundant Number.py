n=int(input("Enter Any Number :"))
sum=0
for i in range(1,n):
    if(n%i==0):
        sum+=i
if(sum>n):
    print(n,'is a Abundant Number.')
else:
    print(n,"is not a Abundant Number.")