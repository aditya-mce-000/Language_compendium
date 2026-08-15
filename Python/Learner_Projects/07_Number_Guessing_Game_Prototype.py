import random
a=0
b=int(random.choice(range(1,100,1)))
while a != b:
    a=int(input("Guess the number: "))#try expect 
    if a>b:
        print("Too high")
    elif a<b:
        print("Too low")
    continue
print("Guessed Correctly")