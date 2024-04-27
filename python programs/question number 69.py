letter=[ ]
st=" "
n=int(input("Number of letter's to be entered : "))
for i in range(n):
    letter.append(input( ))
print(letter)
for l in letter :
    st+=l
print("New Word = ",st)