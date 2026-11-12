#  .   any character** except a new line
#  *   0 or more repetitions
#  +   1 or more repetitions
#  ?   0 or 1 repetition
#  {m} m repetitions
#  {m,n} m-n repetitions

import re

email = input('Email: ')

if re.search('.+@.+.edu', email):#but . will not function as expected
    print('Valid')
else:
    print('Invalid')