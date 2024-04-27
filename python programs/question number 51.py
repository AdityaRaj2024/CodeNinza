print("Enter Numbers = ")
sum=count=0
#count=0
while True :
    n=int(input())
    if n==0 :
        break
    elif(n<0):
        continue
    else:
        sum+=n
        count+=1
avg=sum/count
print("Average of all positive numbers =",avg)