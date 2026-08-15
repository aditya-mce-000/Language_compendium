mass=float(input("Please enter your accurate weight in kg: "))
height=float(input("pleae enter your accurate height in cm: "))/100
BMI=mass/(height**2)
print("Your BMI is:",BMI)
if BMI<=18:
    print("underweight")
elif 18<BMI<25:
    print("normal")
else:
    print("overweight") #but the true question is how to make it into a basic webpage and release it