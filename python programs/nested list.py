"""a=[12,3.4,True,"Hello",[1,2,3]]
print(a[4][1])
n=[1,2,3,4]
print("Original List : ",n)
x=[5,6]
n.append(x)
print("updated list :",n)

x=[1,2,3]
y=[10,20,30]
z=[100,200,300]
add_list=x+y+z
print(add_list)"""

p=[[1,2,3],[10,20,30],[100,200,300]]
for i in p:
    print(i,end=" ")
print("\n")
for i in range  (3):
    for j in p[i]:
        print(j,end=" ")
print("\n")
for i in range (3):
    for j in range (3):
        print(p[i][j],end=" ")  