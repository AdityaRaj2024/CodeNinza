f_n=int(input("Enter First Term :"))
l_n=int(input("Enter Last Term:"))
while(f_n<=l_n):
    num=f_n
    rev=0
    while(f_n>0):
        r=f_n%10
        rev=rev*10+r
        f_n=f_n//10
    f_n=num
    if(num==rev):
        print(rev,end=" ")
    f_n=f_n+1