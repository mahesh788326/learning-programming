# ##without overloading:
# class Point:
#     def _init_(self, x, y):
#         self.x = x
#         self.y = y

# p1 = Point(2, 3)
# p2 = Point(4, 5)
# print(p1 + p2)  # This will raise a TypeError

# ##with overloading:
# class Point:
#     def _init_(self, x, y):
#         self.x = x
#         self.y = y

#     def _add_(self, other):
#         return Point(self.x + other.x, self.y + other.y)

#     def _str_(self):
#         return f"Point({self.x}, {self.y})"

# p1 = Point(2, 3)
# p2 = Point(4, 5)  
# print(p1 + p2)  # Output: Point(6, 8)


# Without operator overloading
class Point:
    def __init__(self, x, y):   # Corrected __init__
        self.x = x
        self.y = y

p1 = Point(2, 3)
p2 = Point(4, 5)
# print(p1 + p2)   # This will raise a TypeError (can't add two Point objects)


# With operator overloading
class Point:
    def __init__(self, x, y):   # Constructor
        self.x = x
        self.y = y

    def __add__(self, other):   # Operator overloading for +
        return Point(self.x + other.x, self.y + other.y)

    def __str__(self):          # String representation
        return f"Point({self.x}, {self.y})"

p1 = Point(2, 3)
p2 = Point(4, 5)
print(p1 + p2)   # Output: Point(6, 8)

