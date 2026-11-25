# class MyException(Exception):
#     pass

class InvalidMarksError(Exception):
    pass

def check_marks(marks):
    if marks<0 or marks>100:
        raise InvalidMarksError("Marks must be between o and 100")

    return "Valid Marks"

try:
    print(check_marks(150))
except InvalidMarksError as error:
    print(error)