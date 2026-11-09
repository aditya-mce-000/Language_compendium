guest = ['B R Ambedkar','Bill Gates','Ramanujan']

for i in range(0, len(guest)):
    print("Hello, "+ guest[i] + ", I would like to invite you for dinner.")

print('Guys, we just found a bigger table.')

guest.insert(0, 'Edison')
guest.insert (2,'Newton')
guest.append('Hawkings')

for i in range(0, len(guest)):
    print("Hello, "+ guest[i] + ", I would like to invite you for dinner.")