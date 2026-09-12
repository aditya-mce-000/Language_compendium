#range function returns a list of numbers that range from zero to one less than the parameter
#we can construct an index loop using for and an integer iterator

print(range(4)) # range(0,4)
print(list(range(4))) # [0, 1, 2, 3]

friends = ['Joseph', 'Glenn', 'Sally']
print(len(friends))
print(range(len(friends))) # range(0,3)
print(list(range(len(friends)))) 