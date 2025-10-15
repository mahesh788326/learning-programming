# class Student:
#     def __init__(self, name, roll_no):
#         # 1. Instance variables created inside constructor using self
#         self.name = name
#         self.roll_no = roll_no
#         print("Inside Constructor:")
#         print("Name:", self.name)
#         print("Roll Number:", self.roll_no)

#     def update_marks(self, marks):
#         # 2. Instance variable created/modified inside instance method using self
#         self.marks = marks
#         print("\nInside Instance Method:")
#         print(f"{self.name}'s Marks Updated to:", self.marks)


# # Creating object of Student
# s1 = Student("Shivam", 101)

# # Updating marks through instance method
# s1.update_marks(95)

# # 3. Accessing and modifying instance variables from outside the class using object reference
# print("\nOutside of Class:")

# print("Name (before):", s1.name)

# # Modifying instance variable
# s1.name = "Padmasri"
# print("Name (after):", s1.name)

# # Calling instance method to add/update marks
# s1.update_marks(85)

# # Accessing newly added instance variable (marks) from outside
# print("Marks (outside):", s1.marks)

print("Hello world")