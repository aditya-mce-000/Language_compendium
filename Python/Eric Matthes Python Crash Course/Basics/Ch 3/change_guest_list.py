guest = ['B R Ambedkar','Bill Gates','Ramanujan']

for i in range(0, len(guest)):
    print("Hello, "+ guest[i] + ", I would like to invite you for dinner.")

print('\nLooks like, '+ guest[1] + " won't be coming.")

guest[1] = 'Steve Jobs'
print('\n')
for i in range(0, len(guest)):
    print("Hello, "+ guest[i] + ", I would like to invite you for dinner.")
