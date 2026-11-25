# # public modifier

# class Student:
#     def __init__(self):
#         self.name = "Aditya"

#     def show(self):
#         print(self.name)

# s1 = Student()

# print(s1.name)#Public member
# s1.show()

#Protected Members

# class Student:
#     def __init__(self):
#         self._marks = 90 # To treat this as an internal inplementation detail

# s1 = Student()
# print(s1._marks)

# Private Members

class Student:
    def __init__(self):
        self.__password = "abc123"
    def show_password(self):
        print(self.__password)

s1 = Student()
s1.show_password()
print(s1.__password)# name mangling (ATTROBUTE ERROR) TO DISCOURAGE DIRECT ACCESS