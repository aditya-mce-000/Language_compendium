numbers = [9, 41, 12, 3, 74, 15]
smallest_so_far = numbers[0]
print('before', smallest_so_far)
for the_num in numbers:
    if the_num <= smallest_so_far:
        smallest_so_far = the_num
    print(smallest_so_far , the_num)

print('After', smallest_so_far)