import random

options = ["rock","paper","scissors"]
computer_choice = random.choice(options)
user_choice = input("Enter your choice (Rock, Paper, Scissors): ")
player_choice = user_choice.lower()
print("Computer Choice = ", computer_choice)

if player_choice == computer_choice:
    print("Draw")
elif player_choice == "rock":
    if computer_choice == "scissors":
        print("Win")
    else:
        print("Defeat")
elif player_choice == "paper":
    if computer_choice == "scissors":
        print("Defeat")
    else:
        print("Win")
elif player_choice == "scissors":
    if computer_choice =="paper":
        print("Win")
    else:
        print("Defeat")
else:
    print("Invalid Choice")