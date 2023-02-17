arr = []

print("Enter values in array: ")
for i in range(5):
    arr.append(int(input()))

value = int(input("Enter element to find index: "))

for i in range(len(arr)):
    if arr[i] == value:
        print("Index: ", i)