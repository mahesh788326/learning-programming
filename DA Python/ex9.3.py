#WAP to convert a list into a tuple
n = int(input("How many numbers? "))
numbers = []
for i in range (n):
    num = int (input(f"Enter number {i+1}: "))
    numbers.append(num)
tuple_no = tuple(numbers)
print("Tuple:",tuple_no )