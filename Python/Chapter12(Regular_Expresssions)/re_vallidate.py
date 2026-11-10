import re

email = input('Email: ')

# if re.search('@',email):
#     print('Valid')
if re.search(r'.+@.+\..+',email):
    print('Valid')
else:
    print('Invalid')

#  .   any character except a new line
#  *   0 or more repetitions
#  +   1 or more repetitions
#  ?   0 or 1 repetition
#  {m} m repetitions
#  {m,n} m-n repetitions