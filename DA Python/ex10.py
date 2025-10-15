# Task 1: Input and print a list
my_list = input("Enter list elements separated by spaces: ").split()
print("Your list:", my_list)

# # Task 2: Find the sum, max, and min of a list
# int_list = list(map(int, my_list))  # Convert to integers
# print("Sum:", sum(int_list))
# print("Max:", max(int_list))
# print("Min:", min(int_list))

# # Task 3: Create a tuple of fruits, Count and find index
# fruits = ("apple", "banana", "mango", "banana", "orange")
# print("Tuple:", fruits)
# print("Count of 'banana':", fruits.count("banana"))
# print("Index of 'mango':", fruits.index("mango"))

# # Task 4: Convert tuple to list and sort
# fruit_list = list(fruits)
# fruit_list.sort()
# print("Sorted fruit list:", fruit_list)

# # Task 5: Create a set from user input
# user_set = set(input("Enter elements for a set separated by spaces: ").split())
# print("Your set:", user_set)

# # Task 6: Perform union and intersection, Add and remove elements
# set1 = {"apple", "banana", "grapes"}
# set2 = {"banana", "orange", "kiwi"}

# print("Union:", set1.union(set2))
# print("Intersection:", set1.intersection(set2))

# set1.add("mango")
# set1.discard("apple")
# print("Updated set1 after add and discard:", set1)

# # Task 7: Create a dictionary with name and age
# person = {"name": "John", "age": 25}
# print("Dictionary:", person)

# # Add a key-value pair and update value
# person["city"] = "Kathmandu"
# person["age"] = 26

# # Loop through dictionary
# for key, value in person.items():
#     print(key, ":", value)
