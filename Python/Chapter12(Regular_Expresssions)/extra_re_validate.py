#  .   any character** except a new line
#  *   0 or more repetitions
#  +   1 or more repetitions
#  ?   0 or 1 repetition
#  {m} m repetitions
#  {m,n} m-n repetitions

import re

email = input('Email: ')

if re.search(r'.+@.+\.edu',email):# \ tells the search to treat it normal character as expected 
    #it is imp to use the r(raw) string
    print('Valid')
else:
    print('Invalid')