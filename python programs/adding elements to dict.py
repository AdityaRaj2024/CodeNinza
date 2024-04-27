D= {}   
print("Empty Dictionary: ")   
print(D)   
    
# Adding elements to dictionary one at a time   
D[1] = 'abc'  
D[2] = 'xyz'  
D[3] = 'pqr'  
print("\nDictionary after adding 3 elements: ")   
print(D)   
    
# Adding set of values    
# with a single Key   
# The ID doesn't exist to dictionary  
D["ID's"]=220, 233, 324
print("\nDictionary after adding 3 elements: ")   
print(D)   
    
# Updating existing Key's Value   
D.update({1:"jkl"})
D.update({2:"lmn"})
#D[1] = 'jkl'  
print("\nUpdated key value: ")   
print(D)    