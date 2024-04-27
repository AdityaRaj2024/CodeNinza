D={"Name":'abc','course':"abc",(13,17,"abc"):109,"semester":'1st'}
#print(D)
#D.pop("course")
#print("updated elements")
#print(D)
#D.popitem()

#del D["Name"]
#print(D)
#del D
#D.clear( )
#print(D)
for i in D :
    print(i,end=' ')
    print(D[i],end=" ")
print("\n")

for i in D :
    print(D[i],end=" ")
print("\n")

for i in D.values( ) :
    print(i,end=" ")
print("\n")

for (i,x) in D.items( ):
    print(i,x)
    
'''x=["a",'b','c']
y=10,"x"

d=dict.fromkeys(x,y)
print(d)'''