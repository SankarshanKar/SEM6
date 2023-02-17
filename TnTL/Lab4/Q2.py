arr = [2, 1, 1, 4, 2, 3, 5, 3, 2]

temp = []

for i in arr:
    if i not in temp:
        temp.append(i)

print(temp)