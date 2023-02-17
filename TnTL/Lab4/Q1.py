arr = [4, 6, 2, 7, 1, 3, 8, 9, 5]

def bubbleSort(arr):
    n = len(arr)
    swapped = False
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                swapped = True
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
        
        if not swapped:
            return

bubbleSort(arr)

print("Second smallest: ", arr[1])
print("Second largest: ", arr[-2])