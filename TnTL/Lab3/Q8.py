str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
str3 = input("Enter third string: ")

print(str1)
print(str2)
print(str3)

del(str2)

print("Is str1 a string: ", isinstance(str1, str))

print("Address of str1: ", id(str1))