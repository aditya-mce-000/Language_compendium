j = [12, 34, 121, 21, 440, 101]

k = 0

for i in range(0, 6, 1):
    if j[i] >= j[k]:
        k = i

print(k+1,'th element is largest')