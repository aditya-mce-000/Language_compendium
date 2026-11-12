import re

email = input('Email: ')

# if re.search('@',email):
#     print('Valid')
# if re.search(r'^[^@]+@+\.edu$',email):
if re.search('.+@.+', email):# r.search('format to search', the variable or the string in ehich it is searching for the occurence)
    print('Valid')
else:
    print('Invalid')

#  .   any character except a new line
#  *   0 or more repetitions
#  +   1 or more repetitions
#  ?   0 or 1 repetition
#  {m} m repetitions
#  {m,n} m-n repetitions