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
# \w is the same as [a-zA-Z0-9_]
# \d    decimal digit
# \D    not a decimal digit
# \s    whitespace characters
# \S    not a whitespace character
# \w    word character, as well as numbers and the underscore
# \W    not a word character
# A|B     either A or B
# (...)   a group
# (?:...) non-capturing version

import re

email = input('Email: ').strip()

if re.search(r"^\w+@\w+\.(com|edu|gov|net|org)$",email):
    print('Valid')
else:
    print('Invalid')