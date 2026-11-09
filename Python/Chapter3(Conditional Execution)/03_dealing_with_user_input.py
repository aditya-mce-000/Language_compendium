
try:
    ival = int(input('Enter a number: '))
except:
    ival = -1

if ival > 0:
    print("Nice Work")
else:
    print("Not a number")