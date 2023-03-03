principal = float(input("Enter the pricipal: "))
time = float(input("Enter the time(years): "))
interestRate = 5

def calcSimpleInterest(principal, time, interestRate):
    simpleInterest = (principal * time * interestRate) / 100
    print("Simple Interest: ", simpleInterest)

calcSimpleInterest(principal, time, interestRate)