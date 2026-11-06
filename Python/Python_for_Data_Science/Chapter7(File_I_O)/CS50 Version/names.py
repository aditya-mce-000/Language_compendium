name = input('What is your name? ')

file = open("names.txt", "w") # w (write) #open
file.write(f'{name}\n')
file.close()# closing


name = input('What is your name? ')

file = open("names.txt", "a") # a (append) 
file.write(f'{name}\n')
file.close()# closing


