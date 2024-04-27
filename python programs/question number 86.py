number=[ ]
print("Enter 10 Number's :")
for i in range(10):
    number.append(int(input( )))
print("original number list are : ")
for  n in number :
    print(n,end=' ')
s_number=set(number)
number=list(s_number)
print("\nUpdated Number List After Removal Of Duplicacy :")
for n in number :
    print(n,end=" ") 