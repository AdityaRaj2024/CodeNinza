#question number = 37
n=int(input("Enter Any Number : "))
num=n
arm=0
count=0
while n>0 :
    count+=1
    n//=10
n=num
while n>0 :
    r=n%10
    arm=arm+r**count
    n//=10
n=num
if(num==arm):
    print(num,"is armstrong.")
else:
    print(num,"is not armstrong.")