arr = []

print("Enter elements of array: ")
for i in range(10):
    arr.append(int(input()))

del(arr[1])
del(arr[4])

print(arr)