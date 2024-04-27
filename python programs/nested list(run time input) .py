lt=[[ ],[ ],[ ]]
x=int(input("Enter Element : "))
for i in range(3):
    for j in range(4):
       lt[i].append(x)
print(lt)
print("List element's are : ")
for i in range(3):
    for j in range(4):
        print(lt[i][j],end=" ")