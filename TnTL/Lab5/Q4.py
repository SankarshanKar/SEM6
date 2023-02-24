arr = {2, 7, 11, 15}
target = 9

ans = []

for i in arr:
    for j in arr:
        if i + j == target:
            print(i, ",", j)
            