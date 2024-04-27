a=input("Enter Any String : ")
for s in a :
    if (65<=ord(s)<=90) :
        print(s,end=" ")
    elif(97<=ord(s)<=122):
        print(chr(ord(s)-32),end=" ")
