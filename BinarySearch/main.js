function binarySearch(arr,x){
    let low = 0;
    let r = arr.length-1;
    let mid;
    // console.log(arr , x)
    while(r >= low){
        mid = low + Math.floor((r-low)/2);

        if(arr[mid] === x){
            return mid;
        }

        if(arr[mid] < x){
            low = mid+1;
        }else{
            r = mid -1;
        }
    }
    return false;
}

arr = new Array(2,3,4,10,40);
x=10;
let result = binarySearch(arr,x);

!result ? console.log("Element is not Present in The Array") : console.log("Element is Present at index "+ result);
