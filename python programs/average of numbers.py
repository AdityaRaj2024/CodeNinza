print("Enter Numbers = ")
sum=0
count=0
while True :
    n=int(input())
    if n==0 :
        break
   # elif(n<0):
        #continue
    else:
        sum=sum+n
        count+=1
avg=sum/count
print("Average of all positive numbers =",avg)