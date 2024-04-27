#question number 35
#WAP in python to input any number after that reverse it.
n=int(input("Enter Any Number : "))
rev=0
while n>0 :
    r=n%10
    rev=rev*10+r
    n=n//10
print("Reverse of number : ",rev)