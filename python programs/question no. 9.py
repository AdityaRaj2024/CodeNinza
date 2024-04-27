#question no.9
a=int(input("Enter First Side="))
b=int(input("Enter Second Side="))
c=int(input("Enter Third Side="))
s=((a+b+c)/2)
print("Perimeter=",s)
ar=(s*(s-a)*(s-b)*(s-c))
ar**=0.5
print("Area=",ar)