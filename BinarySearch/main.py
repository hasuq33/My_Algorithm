def binarySearch(arr,x):
    low = 0
    high = len(arr)

    while(low<=high):
        mid = low + (high-low)//2

        if arr[mid] == x:
            return mid
        
        if arr[mid] > x:
            high = mid -1
        else:
            low = mid + 1
    return False

if __name__ == '__main__':
    arr = [2,3,4,10,40]
    x = 10

    # Let's call function Baby
    result = binarySearch(arr,x)
    print("Element is not Present in the Array") if not result else print(f"Element is Present in array at {result}")
