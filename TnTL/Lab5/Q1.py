arr1 = {1, 2, 3, 4}
arr2 = {4, 5, 6}

for i in arr1:
    for j in arr2:
        if i == j:
            print("Common element: ", i)