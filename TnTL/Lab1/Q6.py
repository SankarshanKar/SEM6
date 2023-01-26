a = input("Enter a three digit number: ")

s = ""

for i in range(1, len(a) + 1):
    s = s + a[-1 * i]

print(s)