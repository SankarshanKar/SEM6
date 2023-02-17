arr1 = ('1', '2', '3', '4', '5')
print("String tuple: ", arr1)

arr2 = tuple((int(i) for i in arr1))

print("Integer tuple: ", arr2)