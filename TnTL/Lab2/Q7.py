num = int(input("Enter a number: "))
temp = num

total = 0

while (temp != 0):
    x = temp % 10
    temp = temp // 10
    total = total + x ** len(str(num))

if (total == num):
    print("Armstrong number")
else:
    print("Not Armstrong number")