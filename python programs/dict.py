"""D=dict([("A","Data"),("B","Type")])
print("Dictionary with each item as a pair: ")"""
D={'Name':"xyz","Course":'BCA',"ID":108,'RollNo':11}
#print(D)
print(type(D))
print(D["Name"])
print(D['RollNo'])
print("Course: %s"%D ["Course"])

print("ID : %d" %D["ID"])
print("NAME :%s"%D['Name'])
print(D.get("RollNo"))