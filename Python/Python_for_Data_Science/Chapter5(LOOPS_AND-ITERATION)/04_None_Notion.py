smallest = None
print('Before')
for value in [9 , 41, 12, 3, 74, 15]:
    if smallest is None:#focus point -0 we used is insted of == 
        smallest = value
    elif value < smallest:
        smallest = value
    print(smallest, value)
print('After', smallest)