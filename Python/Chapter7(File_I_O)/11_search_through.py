fhand = open('hello.txt','r')
# inp = fhand.read() 3 but in this case we convert it into a string and it now iterates character by character if called.
for line in fhand: #when using file handle it itertaes the text line by line
    line = line.rstrip()#strip the whitesapce or newline\n 
    if line.startswith('From:'):
        print(line)