#Use a list when you have a collection of items that might grow, shrink, or change order over time
shopping_list = ["apples", "milk", "bread"]
shopping_list.append("eggs")  # Allowed!
shopping_list[0] = "bananas"  # Allowed!

#Use a tuple when you want to group related data together that should never be accidental edited (e.g., coordinates, RGB colors, database records).
point = (10, 20)
# point[0] = 15  --> ERROR: 'tuple' object does not support item assignment

#Use a set when you only care about uniqueness or checking if an item exists, and you don't care about order.
unique_ids = {101, 102, 103, 101}
print(unique_ids)  # Output: {101, 102, 103} (Duplicate 101 automatically dropped!)