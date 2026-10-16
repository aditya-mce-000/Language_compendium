# # # # # print("hello world) #syntax error

# # # # # x = int(input("What is X? "))
# # # # # print(f"x is {x}")#valueerror

# # # # # try: 
# # # # #     x = int(input("What is x? "))
# # # # #     print(f"x is {x}")
# # # # # except ValueError:
# # # # #     print("x is not an integer")

# # # # try: 
# # # #     x = int(input("x: "))
# # # # except ValueError:
# # # #     print("x is not an integer")

# # # # print(f"x is {x}") #nameerror

# # # # try:
# # # #     x = int(input("What is x? "))
# # # # except ValueError:
# # # #     print("X is not a int")
# # # # else:
# # # #     print(f"x is {x}")

# # # # while True:
# # # #     try:
# # # #         x = int(input("What is x?"))
# # # #     except ValueError:
# # # #         print("x is not int")
# # # #     else:
# # # #         break

# # # # print(f"x is {x}")

# # # # def main():
# # # #     x = get_int()
# # # #     print(f"x is {x}")

# # # # def get_int():
# # # #     while True:
# # # #         try:
# # # #             # x = int(input("x: "))
# # # #             return int(input("x: "))
# # # #         except ValueError:
# # # #             pass
# # # #             # print("x is not int")
# # # #         # else:
# # # #             # break
# # # #             # return x
# # # #     # return x

# # # # main()

# # # def main():
# # #     x = get_int("x: ")
# # #     print(f"x is {x}")

# # # def get_int(prompt="What is x? "):# default prompt
# # #     while True:
# # #         try:
# # #             return int(input(prompt))
# # #         except ValueError:
# # #             pass

# # # main()

# # # x = 0.125
# # # # print(x.as_integer_ratio())#returns the tuple
# # # numerator, denominator = x.as_integer_ratio()
# # # print(numerator)
# # # print(denominator)

# # # a = 45
# # # b = 89
# # # print(a,b)
# # # a, b = b, a
# # # print(a, b)

# # # nw = [x**2 for x in range(10) if (x % 3 == 0)]  #  new_list = [expression for item in iterable if condition]  # if condition is optional
# # # print(nw)

# # # numbers = [1,2,3,4]
# # # labels = ['Even' if num % 2 == 0 else 'Odd' for num in numbers]
# # # print(labels)

# # # Nested Lopps

# # # coordinates = [(x,y) for x in range(3) for y in range(3)]
# # # print(coordinates)

# # # matrix = [
# # #     [1,2],
# # #     [3,4],
# # #     [5,6]
# # # ]

# # # flat = [num for row in matrix for num in row]
# # # print(flat)

# # # The walrus operator

# # import math

# # data = [5,12,18,25]
# # results = [f"Result : {val}" for x in data if (val := math.factorial(x)) > 1000]
# # print(results)

# items = ["apple", "banana", "apple", "cherry", "apple"]

# # Count occurrences of "apple"
# apple_count = items.count("apple")

# print(apple_count)  # Output: 3


# datestr = "12/9/2007"
# month, day, year = datestr.split('/')
# print(f'{year}-{month}-{day}')

# planet, position = 'Pluto', 9
# print("{}, you'll always be the {}th planet to me.".format(planet, position))

# planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
# planet_to_initial = {planet: planet[0] for planet in planets}

# # print(' '.join(sorted(planet_to_initial.values())))


# for planet, initial in planet_to_initial.items():
#     print("{} begins with \"{}\"".format(planet.rjust(7), initial))

str = 'Aditya, hi'
str = str.replace(',','')
print(str)