fruits = ["apple", "banana", "cherry", "kiwi",'guava',"mango"]
new_list = [ ]

for x in fruits:
  if "a" in x:
    new_list.append(x)

print(new_list)

a=[i*i for i in range (1,11)]
print(a)

name = ["amit",'raju','ankit','rajnish',"vivek"]
new_list=[x.upper( ) for x in name]
print(new_list)