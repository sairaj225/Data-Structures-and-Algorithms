
def selection_sort(arr):
    """
    Selection sort function
    """
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i] > arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr

arr = [1, 2, 4, 5, 9, 3]
print(selection_sort(arr))
print(selection_sort.__doc__)