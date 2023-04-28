from math import sqrt

def isPrime(num):
    prime_flag = 0

    if (num > 1):
        for i in range(2, int(sqrt(num)) + 1):
            if (num % i == 0):
                prime_flag = 1
                break
        if (prime_flag == 0):
            return True
        else:
            return False
    else:
        return False


def isSum(num):
    for i in range(1, num // 2):
        if isPrime(i) and isPrime(num - i):
            print(f"{num} = {i} + {num - i}")



num = int(input("Enter a number:"))
isSum(num)