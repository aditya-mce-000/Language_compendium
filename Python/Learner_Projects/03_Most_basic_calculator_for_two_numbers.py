b=float(input("enter first number: "))
c=float(input("enter second number: "))
a=input("enter the operation you would like to access +,-,*,/: ")  #important thing here
if a=="+":
    print(b+c)
elif a=="-":
    print(b-c)
elif a=="*":
    print(b*c)
elif a=="/":
    print(b/c)
else:
    print("operation is not available in this program")
