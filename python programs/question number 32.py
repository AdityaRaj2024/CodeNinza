n=int(input("Enter Any Number = "))
i=1
while(n>0):
      t=n%10
      i=i*t
      n=n//10
print("Product Of All Digits = ",i)