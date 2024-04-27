a=input("Enter Any String :")
b=" "
for i in range(len(a)) :
     if a[i] not in "aeiouAEIOU" :
         b=b+a[i]
print("After removel of vowels = ")
print(b)