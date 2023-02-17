arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(arr)

n = int(input("Enter n: "))

arr[n] , arr[n + 1] = arr[n + 1], arr[n]
print(arr)