n=int(input("Enter Any Number : "))
num=n
rev=0
while n>0 :
    r=n%10
    rev=rev*10+r
    n//=10
if(num==rev):
    print(num,"is a palindrome number.")
else:
    print(num,"is not a palindrome number.")