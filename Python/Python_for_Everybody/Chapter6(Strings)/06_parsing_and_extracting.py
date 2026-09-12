data = 'From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008'
atpos = data.find('@')
# print(atpos)
sppos = data.find(' ',atpos)#find ' ' in the text starting at atpos
# print(sppos,end=' ')# to eliminate the \n
host = data[atpos+1 : sppos] 
print(host)