firms = ['facebook', 'apple', 'netflix', 'google']
names = ['Aditya','Qin','Piglord','Hella']
a = 0
while a < 4:
    message = firms[a].title() + " is the firm " + names[a-1].title() + " wanna join" + '.'
    a += 1
    print(message)