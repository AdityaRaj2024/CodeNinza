n1=int(input("Enter First Number : "))
n2=int(input("Enter Second Number : "))
s1=s2=0
for i in range (1,n1):
    if (n1%i == 0):
        s1+=i
for i in range (1,n2):
    if (n2%i == 0):
        s2+=i
if (n1==s2 and n2==s1):
    print("Both are amicable numbers.")
else :
    print("They are not amicable numbers.")   