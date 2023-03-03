n = int(input("Enter n: "))

product = lambda a, b: a * b

for i in range(1, 11):
    print(n, "*", i, "=", product(n, i))