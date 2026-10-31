#csv -> Comma separated Values
import csv

students = []

with open('students.csv','r') as file:
    # for line in file:
    #     name, house = line.rstrip().split(',')
    #     # print(f'{name} resides in {house}')
    #     student = {'name': name, 'house': house}
    #     # student['name'] = name
    #     # student['house'] = house
    #     students.append(student)
    reader = csv.reader(file)
    for name, home in reader:
        students.append({'name': name, 'home': home})

# print(students)

# def get_name(student):
#     return student['name']

for student in sorted(students, key = lambda student: student['name']): # lambda function
    print(f"{student['name']} is in {student['home']}")