intList = []

print("Enter 5 intergers: ")
for i in range(5):
    element = int(input())
    intList.append(element)

largest = 0

if (intList[0] > largest):
    largest = intList[0]
if (intList[1] > largest):
    largest = intList[1]
if (intList[2] > largest):
    largest = intList[2]
if(intList[3] > largest):
    largest = intList[3]
if (intList[4] > largest):
    largest = intList[4]

print("Largest number: ",largest)