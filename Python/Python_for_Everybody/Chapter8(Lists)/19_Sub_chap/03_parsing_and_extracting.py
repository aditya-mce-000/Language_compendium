fhand = open("C:\\Users\\adity\\OneDrive\\Documents(1)\\Programming\\Data_Science\\Python_for_Everybody\\mail_box.txt")
# for line in fhand:
#     if '@' in line:
#         data = line
#         found = data.find('@')
#         to_print = data.find(' ', found)
#         print(data[found+1:to_print])

# for line in fhand:
#     list = line.split()
#     i = 0
#     while (i < len(list)):
#         if '@' in list[i]:
#             print(list[i])
#             break
#         else:
#             i = i + 1

# print('Done')

for line in fhand:
    list = line.split()
    try:
        if list[0] == 'from' or list[0] == 'From':
            print(list[2])
    except:
        continue