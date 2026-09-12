astr = 'Hello Bob'
try:
    iatr = int(astr)
except:
    iatr = -1
print('First', iatr)

astr = '123'

try:
    iatr = int(astr)
except:
    iatr = -1

print('Second', iatr)