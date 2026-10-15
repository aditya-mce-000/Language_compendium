# # print("hello world) #syntax error

# # x = int(input("What is X? "))
# # print(f"x is {x}")#valueerror

# # try: 
# #     x = int(input("What is x? "))
# #     print(f"x is {x}")
# # except ValueError:
# #     print("x is not an integer")

# try: 
#     x = int(input("x: "))
# except ValueError:
#     print("x is not an integer")

# print(f"x is {x}") #nameerror

# try:
#     x = int(input("What is x? "))
# except ValueError:
#     print("X is not a int")
# else:
#     print(f"x is {x}")

# while True:
#     try:
#         x = int(input("What is x?"))
#     except ValueError:
#         print("x is not int")
#     else:
#         break

# print(f"x is {x}")

# def main():
#     x = get_int()
#     print(f"x is {x}")

# def get_int():
#     while True:
#         try:
#             # x = int(input("x: "))
#             return int(input("x: "))
#         except ValueError:
#             pass
#             # print("x is not int")
#         # else:
#             # break
#             # return x
#     # return x

# main()

def main():
    x = get_int("x: ")
    print(f"x is {x}")

def get_int(prompt="What is x? "):# default prompt
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass

main()