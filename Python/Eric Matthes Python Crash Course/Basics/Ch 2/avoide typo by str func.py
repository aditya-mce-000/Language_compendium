age = 23
# message = "Happy" + age + "rd birthday"

# print(message)#The error in your code is a TypeError.In Python, you cannot directly use the + operator to combine (concatenate) a string (text) and an integer (number). Python doesn't know how to add text and numbers together automatically.

message = "Happy "+ str(age) + "rd Birthday!"#convert to str then print

print(message)