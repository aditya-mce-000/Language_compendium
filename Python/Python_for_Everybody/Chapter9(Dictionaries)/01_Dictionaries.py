# Dictionaries in Python are most powerful data collection.
# Dictionaries allows us to do fast database like operations in python 
# Dictionaries have different name in different languages

# Associative arrays - perl/PHP
# Properties or maps or Hashmap - Java
# Property Bag - c#/.NET

# Lists index their entries based in the position in the list
# Dictionaries are like bags in no order
# So we index them we put in a dictionary with a lookup tag

purse = dict()
purse['money'] = 12
purse['candy']= 3
purse['tissue'] = 75

print(purse)

print(purse['candy'])

purse['money'] += 23

print(purse)