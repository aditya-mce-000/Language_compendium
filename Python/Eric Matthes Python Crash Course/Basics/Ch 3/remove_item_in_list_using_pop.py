#pop removes the last element in the list but it lets me work eith that item after removing.
motorcycles = ['honda', 'yamaha', 'suzuki']
print(motorcycles)
#motorcycles.pop() just use this syntax if you do not wanna store the last element that was removed
popped_motorcycles = motorcycles.pop()# this variable stores the value of the last element that was removed using the pop method
print(motorcycles)
#by default when using the pop method the last element is removed but we could also specify the position of element we wanna remove.
print(popped_motorcycles)
#the benefit of using pop is that we can use that element any where ELSE if we want to.
