fhand = open('hello.txt')
for line in fhand:
    if not '@' in line:
        continue
    print(line.rstrip())