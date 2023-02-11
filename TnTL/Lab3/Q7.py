str = input("Enter a string: ")
substr = input("Enter a sub string: ")

if substr in str:
    print("The sub string is present in the substring.")
else:
    print("The substring is not present in the string.")

print("Original string: ", str)