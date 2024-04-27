s=input("Enter the String = ")
c=len(s)
a=c-1
e=c*-1
print("reverse :- ")
while e< 0 :
    b=e+a
    print(s[b],end=" ")
    e+=1
    a-=2