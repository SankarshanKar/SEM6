str = input("Enter a string: ")

rev = ""

for i in range(1, len(str) + 1):
    rev = rev + str[-1 * i]

print("The reverse of the string is: ", rev)