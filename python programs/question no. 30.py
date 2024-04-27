#question no. 30
n=int(input("Enter Any Number ="))
i = 0
while(n!=0):
      n//=10
      i+=1
print("Count of digits =", i)