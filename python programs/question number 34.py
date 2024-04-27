n=int(input("Enter Any Number ="))
i=0
while(n>0):
      t=n%10
      i=i+t
      n=n//100
print("Addition Of Alternate Digit's =",i)