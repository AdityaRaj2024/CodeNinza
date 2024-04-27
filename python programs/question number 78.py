l=[ ]
t=[[ ],[ ]]
for i in range(3):
    l.append([ ])
print("Enter Value For Matrix :")
for i in range(3):
    for j in range(2):
        l[i].append(int(input( )))
print("Matrix Is :")
for i in range(3):
         for j in range(2):
             print(l[i][j],end='\t')
         print( ) 
print('Transpose Matrix Is : ')
for i in range(2):
         for j in range(3):
             t[i].append(l[j][i])
             print(t[i][j],end='\t')
         print( )      