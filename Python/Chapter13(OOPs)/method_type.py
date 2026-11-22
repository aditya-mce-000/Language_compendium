# Instance Methods
# class student:
#     def __init__(self,name):
#         self.name = name

#     def show_name(self):
#         print(self.name)

# s1 = student("Aditya")
# s1.show_name()

# class methods

class Student:
    school = "XYZ School"
    @classmethod
    def change_school(cls, new_school):
        cls.school = new_school

print(Student.school)
Student.change_school("ABC School")

print(Student.school)