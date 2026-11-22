class student():
    school = "Delhi Public School" # object attribute
    def __init__(self, name, age):
        self.name = name # instance attribute
        self.age = age
    def introduce(self):
        print(f"My name is {self.name}.\nI am {self.age}.")

student1 = student("Aditya", 20)  #instance of the class
student1.introduce()
student1.school = "abc school"
print(student1.school)
print(student.school)