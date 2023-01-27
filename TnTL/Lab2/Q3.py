totalMarks = 0.0

print("Enter marks for five subjects: ")
for i in range(5):
    totalMarks = totalMarks + float(input())

percentage = totalMarks / 500 * 100
print("Percentage = ", percentage)

if percentage >=90 and percentage <= 100:
    print("Grade: O")
elif percentage >= 80 and percentage < 90:
    print("Grade: E")
elif percentage >= 70 and percentage < 80:
    print("Grade: A")
elif percentage >= 60 and percentage < 70:
    print("Grade B")
elif percentage >= 50 and percentage < 60:
    print("Grade: C")
elif percentage >= 40 and percentage < 50:
    print("Grade: D")
else:
    print("Grade: F")