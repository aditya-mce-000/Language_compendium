str = "x-DSPAM-Confidence: 0.8475"
x = str.find(":")
str_part = str[x+1:]
print(str_part)
num = float(str_part)
print(num)