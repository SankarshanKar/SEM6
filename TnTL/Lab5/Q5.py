myDict = {1: 1, 2: 2, 3: 3}

product = 1
for i in range(len(myDict)):
    product = product * myDict[i + 1]

print("Product: ", product)