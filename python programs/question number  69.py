letter=[ ]
st=" "
n=int(input("Number of letter's to be entered : "))
for i in range(n):
    letter.append(input( ))
print(letter)
st=''.join(letter)
print(st)