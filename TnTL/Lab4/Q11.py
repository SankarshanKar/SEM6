arr1 = (1, 2, 5, 2, 3, 5, 2, 1, 2)
print(arr1)

n = 2
print("n =", n)

count = 0
for i in arr1:
    if i == n:
        count = count + 1

print("Count:", count)