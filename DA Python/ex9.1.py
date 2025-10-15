n = int(input("How many numbers? "))
even = odd = 0

for i in range(n):
    num = int(input("Enter number: "))
    if (num % 2 == 0): 
        even += 1
    else:
        odd += 1

print("Even:", even)
print("Odd:", odd)
