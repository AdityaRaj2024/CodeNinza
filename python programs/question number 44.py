f_n=int(input("Enter First Term : "))
l_n=int(input("Enter Last Term : "))
print ("prime number's are = ")
for n in range (f_n,l_n+1) :
        if n>1 :
            for i in range (2,n):
                if (n%i==0):
                    break
            else :
                print (n,end =" ")