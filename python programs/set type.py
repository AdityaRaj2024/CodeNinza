"""a = {"Monday","Tuesday","Wednesday","Thursday", "Sunday"}
#b = {"Friday","Saturday","Sunday"}
#print(a&b)
#a={12,18,6,21,15}
#b={15,18,12,21}
#c={6,21,12}
#a.intersection_update(b, c)
a=frozenset({12,18,6,21,15})
print(type(a))
for i in a :
    print(i,end=" ")
a.add(81)
#print(a)"""
D= {"Name":"abc", "Class":"10", "ID":101}     
print(type(D))    
F= frozenset(D) #Frozenset will contain the keys of the dictionary    
print(type(F))    
for i in F:     
    print(i)   