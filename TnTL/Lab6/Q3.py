n = int(input("Enter n: "))

temp = 1
def printNum(n, temp):
    if temp <= n:
        print(temp)
        temp = temp + 1
        printNum(n, temp)

printNum(n, temp)