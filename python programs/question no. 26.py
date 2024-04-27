#question no. 26
a=int(input("Enter Basic salary :"))
b=input("Enter employee's type :")
b=b.lower()
if(b=='regular'):
    if(a>=50000):
        print('bonus = 5000')
    else:
       print("bonus=3000")
elif(b=='visiting'):
    if(a>=50000):
        print("bonus=4000")
    else:
        print("bonus=2500")
else:
    print("invalid detais")