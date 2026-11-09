import sys

if len(sys.argv) < 2:
    sys.exit('Too few command-line arguments')
elif len(sys.argv) > 2:
    sys.exit('Too many command-line arguments')
elif sys.argv[1].endswith('.py') == False:
    sys.exit('Not a python file')

try:
    count = 0
    with open(sys.argv[1]) as file:
        lines = file.readlines()

    for line in lines:
        if line.startswith('#') == False and line.strip() != "":
            count += 1

    print(count)

except:
    sys.exit('File does not exist')