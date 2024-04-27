while True :
    print("Enter Your Choice :")
    print("press 1 -> For Check Prime")
    print("press 2 -> For Check Armstrong.")
    print("press 3 -> For Check Palindrome")
    print("press 4 -> For Check Perfect")
    print("press 5 -> For Check Abundant")
    print("press 6 -> For Check strong")
    print("press 0 ->For Exit")
    choice=int(input())
    if(choice==1):
        n=int(input("Enter Any Number : "))
        i=int(n/2)
        if n>1:
             for i in range (2,n):
                  if (n%i)==0 :
                       print(n,"is not a prime no.")
                       break
             else :
                print(n,"is a prime number")
        else:
            print(n,'is not a prime number') 
    elif(choice==2):
       n=int(input("Enter Any Number:"))
       num=n
       arm=0
       count=0
       while n>0 :
          count+=1
          n//=10
       n=num
       while n>0 :
          r=n%10
          arm=arm+r**count
          n//=10
       n=num
       if(num==arm):
           print(num,"is armstrong.")
       else:
           print(num,"is not armstrong.")  
    elif(choice==3):
        n=int(input("Enter Any Number :"))
        num=n
        rev=0
        while n>0 :
           r=n%10
           rev=rev*10+r
           n=n//10
        if(num==rev):
           print(num,"is a palindrome")
        else:
           print(num,"is not a palindrome")  
    elif(choice==4):
         n=int(input("Enter Any Number :"))
         sum=0
         for i in range(1,n):
             if(n%i==0):
                 sum=sum+i
         if(sum==n):
             print(n,"is a perfect number.")
         else:
            print(n,"is not a perfect number.")
    elif(choice==5):
          n=int(input("Enter Any Number :"))
          sum=0
          for i in range(1,n):
             if(n%i==0):
                 sum+=i
          if(sum>n):
            print(n,'is a Abundant Number.')
          else:
           print(n,"is not a Abundant Number.")
    elif(choice==6):
         n=int(input("Enter Any Number :"))
         sum=0
         num=n
         while(n>0):
            r=n%10
            f=1
            for i in range(r,0,-1):
                f=f*i
            sum=sum+f
            n=n//10
         if(num==sum):
          print(num,"is strong number.")
         else :
          print(num,"is not a strong number.")
    elif choice==0 :
         break
    else:
        print("Invalid Entery ,Please Enter Choice from 1 - 6")