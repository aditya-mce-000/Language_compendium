fname = input('File name: ')
try:
    fhand = open(fname)
    # count = 0
    # for you in fhand:
    #     if you.startswith('Subject:'):
    #         count += 1

    # print('There are ',count,'subject lines in', fname)
except:
    print('Not a good name')
    quit()

count = 0
for you in fhand:
    if you.startswith('Subject:'):
        count += 1

print('There are ',count,'subject lines in', fname)