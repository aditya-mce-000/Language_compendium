import csv 

students = []

with open('students.csv') as file:
    reader = csv.reader(file)# inverted commas are important in this case
    for row in reader:
        students.append({'name': row[0], 'home': row[1]})
# with open('students.csv') as file:
#     for line in file:
#         name,home = line.rstrip().split(',')
#         student = {'name':name,'home':home}
#         # student['name'] = name
#         # student['house'] = house
#         students.append(student)

# # def get_name(student):
# #     return student['name']
 
# # for student in sorted(students,key = get_name):
# #     print(f"{student['name']} is in {student['house']}")

for student in sorted(students, key = lambda student: student['name']):
    # lambda function format:- arguments: exppression to return a value
    print(f"{student['name']} is in {student['home']}")