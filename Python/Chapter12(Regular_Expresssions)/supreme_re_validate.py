#  .   any character** except a new line
#  *   0 or more repetitions
#  +   1 or more repetitions
#  ?   0 or 1 repetition
#  {m} m repetitions
#  {m,n} m-n repetitions
# ^   matches the start of the string
# $   matches the end of the string or just before the newline at the end of the string
# []    set of characters
# [^]   complementing the set

import re

email = input('Email: ').strip()

# if re.search(r"^.+@.+\.edu$",email):
#     # ^   matches the start of the string
#     # $   matches the end of the string or just before the newline at the end of the string
#     print('valid')

# if re.search(r'^[^@]+@[^@]+\.edu$', email):
if re.search(r'^[a-zA-Z0-9_]+@[a-zA-Z0-9_]+\.edu$',email):
    print('Valid')
else:
    print('Invalid')