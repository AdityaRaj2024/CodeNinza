#question no.27
a=int(input("Enter Age : "))
b=input('Enter Gender : ')
b=b.lower()
if(b=='female' and a>=18):
    print('Elegible For marraige')
elif(b=='male' and a>=21):
    print('Elegible For marraige')
else:
    print("Not Elegible For marraige")