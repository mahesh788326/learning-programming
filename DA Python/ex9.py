user_input = input("Enter items separated by space: ")
items = user_input.split()
print("List:", items)

n = int(input("How many numbers? "))
numbers = []

for i in range(n):
    num = int(input(f"Enter number {i+1}: "))
    numbers.append(num)

print("Numbers List:", numbers)