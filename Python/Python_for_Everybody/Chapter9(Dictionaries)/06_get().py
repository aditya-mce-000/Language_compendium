counts = dict()
names = ['csev','cwen','csev','zqian','cwen']
for name in names:
    counts[name] = counts.get(name,0) + 1
print(counts)

# get(to_find, if_not_found_assign_the_value) 