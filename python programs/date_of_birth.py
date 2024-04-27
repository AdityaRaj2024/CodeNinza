n=int(input("Enter Any Number :- "))
r=n%100
if(r>50):
    r=r-50
s=n//100
s=s-2
print(r)
print(s)