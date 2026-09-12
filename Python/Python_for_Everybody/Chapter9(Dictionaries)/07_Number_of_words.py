fhandle = open("C:\\Users\\adity\\OneDrive\\Documents(1)\\Programming\\Data_Science\\Python_for_Everybody\\Chapter9(Dictionaries)\\text1.txt")
text = fhandle.read()
count = 0
for line in fhandle:
    words = line.split(" ")
    # for word in words:
    #     count += 1
    count += len(words)

print(count)

# counts = dict()
# print('Enter a line of text: ')
# line = input('')

# words = line.split()
# print('Words:',words)

# print("counting...")
# for word in words:
#     counts[word] = counts.get(word,0) + 1
# print('counts',counts)   