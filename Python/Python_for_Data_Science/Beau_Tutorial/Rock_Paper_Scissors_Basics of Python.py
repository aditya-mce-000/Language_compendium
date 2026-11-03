import random
#1>Variables and functions
def get_choices():    #creating a fuction makes it esaier while dealing with several variables 
    player_choice = input("Enter a choice (rock, paper, scissors): ")    #we have now created a variable and assigned it a value
    options = ["rock","paper","scissors"]
    player_choice=player_choice.lower()
    computer_choice = random.choice(options)    #indention is very imp in python. Having same indentation determines the fuction length
    choices = {"player":player_choice, "computer":computer_choice}   #THis is dictionaries                           
    return choices    #this decides what will be returns when the function is called
#fuction=A function is a set of code which only runs when it is called.
def check_win(player, computer ):#When we call the function, we will pass the imf to these variable
    print(f"You chose {player}, Computer chose {computer}.")#player and computer argument have diff values and uses depending on arguments.
    a="You Win"
    b="You lose"
    if player==computer:
        return "It is a tie!"
    elif player=="rock" :
        if computer=="scissors":
            return a
        else:
            return b
    elif player=="paper":
        if computer=="scissors":
            return b
        else:
            return a
    elif player=="scissors":
        if computer=="rock":
            return b
        else:
            return a
    else:
        print(f"You Are Done!!! Choose Valid Option!!!")
    
choices = get_choices()
result = check_win(choices["player"],choices["computer"])#seems like we are assigning the values to variables in the fucnction check_win
print(result)
#2>Calling functions
#choices = get_choices()        #fuction being called
#print(choices)
#print(get_choices()) #direct use

#3>Dictionaries--Used to store data value and key-value pairs.We could use variable name without quotes.
#dict = {"name":"beau","color":"blue"}            #This is a dictionary.Name is key and beau is value.

#4> Libraries, Lists, Methods
#How we can import random library
#a list in python is used to store multiple item in a single variable
# Libraries, Lists, Methods
#How we can import random library

#food = ["pizza","carrots","eggs",3]#this is a list of strings
#dinner = random.choice(food)
#function arguments

#5 If statments
#a=3#single equal sign is a assign operator in python
#b=5
#if a == b:#double equal sign is used to check if two values are equal
#    print("yes")

#6 f-string
#age=25
#print(f"Jim is {age} years old.")

#7 if else
#age = int(input("Enter your age: "))
#if age >= 18:
#    print("You are an adult.")
#elif age>12:
#    print("You are a teenager")
#elif age>1:
#    print("You are a child")
#else:
#    print("You are a baby.")

#8> Refactoring and nested if
