# Pure Function
# Two Rules:
# 1. Given Same Input, It produces same Input always
# 2. It does not cause side effect or modify external states

# def add(a,b):
#     return a+b

# print(add(10,20))
# print(add(10,20))

# Impure Function

total = 0

def add_to_total(number):
    global total
    total += number
    return total

print(add_to_total(10))
print(add_to_total(30))