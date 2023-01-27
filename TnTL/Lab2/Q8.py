n = int(input("Enter n: "))

print("Fibonacci series: ")
a = 0
b = 1
print(a)
print(b)

for i in range(2, n):
    print(a + b)
    temp = b
    b = a + temp
    a = temp
