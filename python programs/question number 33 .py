n=int(input("Enter Any Number = "))
i=0
while(n>0):
           t=n%10
           n=n//10
           if (t%2==0):
               i=i+t
print("Addition Of All Even Digits =",i)