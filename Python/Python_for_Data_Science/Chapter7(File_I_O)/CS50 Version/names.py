name = input('What is your name? ')

# file = open("names.txt", "a") # w (write) # a (append)
# open
# file.write(f'{name}\n')
# file.close()# closing

with open('names.txt','a') as file:
    file.write(f"{name}\n") # With to automatically close the file after th the line has been executed