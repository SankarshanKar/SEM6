num = input("Enter a number: ")

rev = ""
i = 1

for i in range(1, len(num) + 1):
    rev = rev + num[-1 * i]

print("Reverse: ", rev)