def partition(arr,low,high):
    pivot = arr[high]
    i = low -1
    j=low
    while j<high:
        if arr[j] < pivot:
            i+=1
            (arr[i],arr[j]) = (arr[j],arr[i])
        j+=1
    i+=1
    (arr[i],arr[high]) = (arr[high],arr[i])
    return i


def quickSort(arr,low,high):
    if low<high:
        pivotIndex = partition(arr,low,high)
        quickSort(arr,pivotIndex+1,high)
        quickSort(arr,low,pivotIndex-1)

if __name__ == '__main__':
    arr = [1,7,8,91,58,528,-16,-17,16,16,16,6529,628,-628,52,21]
    n = len(arr)
    quickSort(arr,0,n-1)

    print(arr)