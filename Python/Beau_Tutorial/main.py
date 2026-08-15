# name="Beau" #indentation  matters in python
# print(type(name)==str) #This is used to know the data type of variable. And also we could directky compare the data type to probable using ==.
# print(isinstance(name,str)) #This checks whether object belongs to a specific class or data type
# Float, int, str,
# age=int("20")
# print(age)
# complex for complex numbers
# bool for booleans
# list for lists
# tuple for tuples
# range for ranges
# dict for dictionaries
# set for sets

# ********Operator**********
# = is assignment operator.
# +(addition),-(subtraction),*(multiplication),/(division),%(modulus),**(square),//(floor division) are mathematical operators
# age=83#This operator could be used with any mathematical operator. They means similar. This used to shorten the code.
# age+=9#this means age=age +9
# print(age)

# ==,!=,>,<,<=,>= are comparison operators.
# == check whether equal to
# !- checks whether not equal to. Others are obvious.

# Boolean operator True or False

## OR Operator ## Checks first if first is true then returns the first and if it is fslse then it returns the second as output

# print(0 or 1) #1 //0--fakse and 1--False
# print(False or 'hey') #hey
# print('hi' or 'hey') #hi
# print([] or False) #False as [] is considerded a false value
# print(False or []) # [] as Flase is also a false value
# # AND Operator ## Evaluates whether first is true or false. if first is true then it moves on to second and if first is false then it gives the first value as output wihthout checking the second 

# print(0 and 1) #0
# print(1 and 0) #0
# print(False and 'hey') #False
# print('hi' and 'hey') #hey
# print([] and False) #[]
# print(False and []) #False

## BITWISE OPERATOR ##
# & perfroms binary and
# | performs binary or
# ^ performs a binary xor(exclusive or) operation
# ~ performs a binary nor operation
# << shift left operation 
# >> shift right operation

# is--Identity Operator
# a=1
# print(int(a) == 1)
# in--Memebership Operator
# a=[1,2,3]
# print(1 in a)

#       Ternary Operator        # 
# def is_adult(age):
#     if age > 18:
#         return True   #without ternary operator
#     else:
#         return False
    
# def is_adult2(age):           #with ternary operator
#     return True if age>18 else False #Everything on a single line

#Strings in python 
# "Adi"
# 'Adi'
# name='Adi'
# phrase=name+' is my name'
# name+=' is my name'#append
# print(name)
# age=str(38)
# type ctrl+/
# print("""Adi is
# 19     
#       years old
# """)#multi line string

# print("adi".upper())#Changes to upper case all
# print("ADi".lower())#changes to lower case all
# print("adi doIng things".title())#Changes the first letter of each word to capital and remaing to small
# print("adea".islower())#used to check whether it is all lower letters

# isalpha() to check if a string contains only characters and is not empty
# isalnum to check if a string contains characters or digits and is not empty
# isdecimal() to check if a string contains digits and is not empty
# lower() to get lowercase version of  a string
# islower() to check whether if a string is all lowercase
# upper() to get uppercase version of a string
# isupper to check if a string is uppercase
# title() to capitalize the first letter of the string
# startswith() to checks if string starts with a specific substring
# endswith() to check if the string ends with a specific substring 
# replace() to replace  a part of the string
# strip() to trim the whitespace from a string
# split() to split a string on a specific cahracter separator
# join() to append new letters to a string
# find() to find the position of a substring

# a=str(123)
# print(a+"j")

# name1="Be\nau "
# print(name1.lower())
# print(len(name1))#calculates number of characters in a string including spaces
# print(len(name1.replace(" ","")))#Only letters
# print("au" in name1)
# name2="Be\"au" #How to escape a character
# print(name2)
# name3='Be"au'
# print(name3)
# name4='Be"\'au'
# print(name4)
# print(name1)
# name5='Be\\au'
# print(name5)

# String Characters and Slicing #
# name="Beau"
# print(name[0]) #most programming languages start counting with zero.
# print(name[1], name[2])
# print(name[-1])
# print(name[1:2])

# Booleans #
# done = True
# print("YES") if done else print("NO") #Ternary Operator
# print(isinstance(done,bool))
#Numbers are always true except 0.
#String are only false when empty

# any and all #
# book_1_read = True
# book_2_read = False
# read_any_book = any([book_1_read, book_2_read]) #any global fuction
# print(read_any_book)
# read_all_books = all([book_1_read, book_2_read]) #all global fuction
# print(read_all_books)

#Complex Number#
# a = 2+3j#j=iota
# print(type(a))
# num = complex(2,3)
# num2 = 2 + 5j
# print(num2.real)
# print(num)
# print(type(num))
# print(num.real, num.imag)

# print(abs(-5.5))#abs gives the absolute value of the function -->5.5
# print(abs(5.5))#positive remains positive

# print(round(5.49))#rounda off to nearest integer
# print(round(5.49, 1))
#After comma one means than we should round it off to one digit after decimal

#    Enum    #
# from enum import Enum

# class State(Enum):#Enum is the only way to assign constant value to a variable so that nobody could change them
#     INACTIVE = 0
#     ACTIVE = 1

# print(State.ACTIVE)
# print(State.ACTIVE.value)
# print(State(1))
# print(State['ACTIVE'].value)
# print(list(State))
# print(len(State))

# print("Enter your age: ", end="")  #Imp end at the last to remain in the same line
# age = input()
# # age=input("Enter Your Age: ")
# print("Your age is",age)
# dogs = ["Roger" , 1, "Syd" , True, "Quincy", 7]
# dogs[2] = "Beau"
# print(dogs[2])
# print(dogs[1:3])
# print(dogs[:2])
# print(dogs[1:])
# dogs.append("Judah")
# dogs.extend(["Hi"])# important syntax
# print(len(dogs))
# dogs += ["Sam", "Harry"]
# print(dogs)
