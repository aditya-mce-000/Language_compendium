# total = 0
# count = 0
# while True:
#     inp = input('Enter a number: ')
#     if inp == 'done': break
#     value = float(inp)
#     total = total + value
#     count = count + 1

# average = total/count
# print('Average: ', average)

num_list = list()
while True:
    try:
        inp = int(input('Enter the number: '))
    except:
        break
    num_list.append(inp)

print('Average = ', sum(num_list)/len(num_list))