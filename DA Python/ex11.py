# # Find the maximum of three numbers
# def find_max(a, b, c):
#     return max(a, b, c)
# a, b, c = map(int, input("Enter 3 numbers: ").split())
# print("Max:", find_max(a, b, c))

# #Ask user to enter marks of 5 subjects. Create a function that calculates the average.
# def average_marks(marks):
#     return sum(marks) / len(marks)
# marks = list(map(int, input("Enter 5 marks: ").split()))
# print("Average:", average_marks(marks))

# #Create a function that checks if the given year is a leap year. 
# def is_leap(year):
#     return (year % 4 == 0 and year % 100 != 0) or year % 400 == 0
# year = int(input("Enter year: "))
# print("Leap year" if is_leap(year) else "Not a leap year")


def leafyear(n):
    if (n % 4 == 0 and n % 100 != 0) or n % 400 == 0:
        return "Leap Year"
    else:
        return "Not Leap Year"  

n = int(input("Enter year: "))
print(leafyear(n)) 