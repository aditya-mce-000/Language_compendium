# Chapters = ['Relativity', 'Optics', 'Semiconductor']

# Chapters.remove('Semiconductor')#when using the remove func, we must specify the element we want to remove 
# #This remove func is probably noot that useful
# print(Chapters)
motorcycles = ['honda', 'yamaha', 'suzuki', 'ducati'] 
print(motorcycles)
too_expensive = 'ducati'
motorcycles.remove(too_expensive)
print(motorcycles)
print("\nA " + too_expensive.title() + " is too expensive for me.")
#could be use in this way to explain the removal of an elements

#The remove() method deletes only the first occurrence of the value you specify. If there’s 
# a possibility the value appears more than once in the list, you’ll need to use a loop to 
# determine if all occurrences of the value have been removed. You’ll learn how to do 
# this in Chapter 7. We could use loop for that i guess.