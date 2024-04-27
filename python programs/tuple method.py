t1=("python",True,18.4,65)
t2=("Apple",False,16.9,73)
for t in t1 :
    print(t,end=" ")
print("\n")
for t in range(len(t1)) :
    print(t1[t],end="   ")
print("\n")
print(t1*2)
print(t1+t2)
print(65 in t1)
print(len(t1))
print(len(t2))

fruits = ("apple",'banana',"mango")
(red,yellow,green)=fruits
print(red)
print(yellow)
print(green)