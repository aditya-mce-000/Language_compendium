fhand = open('hello.txt')
for line in fhand:
    if '@' in line:
        data = line
        found = data.find('@')
        to_print = data.find(' ', found) # it takes up the task  of finding the ' ' starting from the found andreturns the index
        print(line[found+1:to_print]) 
    # continue