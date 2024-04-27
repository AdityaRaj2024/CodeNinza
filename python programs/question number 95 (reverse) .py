def rev (n):
    rev=0
    while n>0 :
        r=n%10
        rev=rev*10+r
        n=n//10
    print("Reverse Number =" ,rev)
n=int(input("Enter Any Number : "))    
rev (n)