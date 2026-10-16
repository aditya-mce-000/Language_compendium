x = 0.6
x = 3.9 * x * (1 - x)# = is the assignment operator
print(f"{x:.2f}")#using f string and the used method we could specify the number of digit to print after decimal in the output

value = 5.6789
print("{:.2f}".format(value))

amount = 45.1
formatted_amount = f"{amount:.2f}"

print(formatted_amount)#type of output is string 