s=input("Enter the String = ")
a=(s[len(s)-1::-1])
if(a==s):
    print (s,"is palindrome.")
else :
    print(s,"is not palindrome.")