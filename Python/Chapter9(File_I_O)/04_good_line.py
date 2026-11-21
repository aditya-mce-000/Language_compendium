fhand = open('hello.txt')
for line in fhand:
    if not line.startswith('From: '):
        continue
    print(line.rstrip() )