#days={"Monday","Tuesday",'Wednesday','Thursday','Friday','Saturday',"Sunday"}
#print(days)
#print(type(days))
#print("looping through the set elements..")
#for s in days :
 #   print(s)
 
Months={"January",'February',"March"}
print("printing the original set...")
print(Months)
print(type(Months))
print("Adding Other Months To The Set...")
Months.add("April")
print("Using add function")
print(Months)
Months.update(["May","June","July"])
print("Using update function..")
print(Months)
print("looping through the set elements..")
for m in Months :
    print(m,end=" ")