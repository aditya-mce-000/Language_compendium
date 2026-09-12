def average(num):
    try:
        return sum(num)/len(num)
    except:
        print('No elements')
        return

num = [12,13, 134, 52, 53]
print(average(num))