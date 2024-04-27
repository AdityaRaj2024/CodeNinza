p=int(input("Enter Principal amount ="))
r=int(input("Enter Interest Rate="))
t=int(input("Enter Time Period ="))
ci=(p*(1+r/100)**t)-p
ci=ci*12
ci=round(ci,2)
print("compound interest=",ci)