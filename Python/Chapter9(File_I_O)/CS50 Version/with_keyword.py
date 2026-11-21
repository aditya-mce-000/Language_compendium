# with open('names.txt','a') as file:#auto close
#     name = (input('Name: ')).title()
#     file.write(f"{name}\n")

with open('names.txt','r') as file:
#     names = file.readlines()

# for name in names:
#     print(f"Hi, {name.rstrip()}")
    for line in file: #other method to access the names other than readlines()
        print(f'hello, "{line.rstrip()}"')