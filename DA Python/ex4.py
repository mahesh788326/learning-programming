#To find the grade of the student by taking the input from the user
 
m = int(input("Marks: "))
if m > 100 or m < 0:
    print("Invalid")
elif m >= 90:
    print("The grade is A")
elif m >= 80:
    print("The grade is B")
elif m >= 70:
    print("The grade is C")
elif m >= 60:
    print("The grade is D")
elif m >= 50:
    print("The grade is E")
else:
    print("The grade is F")