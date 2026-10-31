# with open('names.txt','r') as file:
# #     lines = file.readlines()

# # for line in lines:
# #     print('hello,', line.rstrip()) #end = "")
#     for line in file:
#         print('Hello,', line.rstrip())

names = []

with open('names.txt') as file:
    for line in sorted(file):
        # print('hello', line.rstrip())
        names.append(line.rstrip())

for name in sorted(names): #reverse=True):
    print(f"hello, {name}")
        