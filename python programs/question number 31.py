#question no.31
n=int(input("Enter Any Number ="))
i=0
while(n>0):
      t=n%10
      i=i+t
      n=n//10
print("Addition Of All Digits =",i)