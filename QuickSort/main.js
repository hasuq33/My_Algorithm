function partition(arr,low,high){
    let i = low -1;
    let pivot = arr[high];

    for(let j=low; j <= arr.length; j++){
        if(arr[j] < pivot){
            i++;
            [arr[j],arr[i]] = [arr[i],arr[j]];
        }
    }
    i++;
    [arr[i],arr[high]] = [arr[high],arr[i]];
    return i;
}

function QuickSort(arr,low,high){
    if(low<high){
        let pivotIndex = partition(arr,low,high);
        QuickSort(arr,pivotIndex+1,high);
        QuickSort(arr,low,pivotIndex-1);
    }
}

arr = new Array(1,7,8,91,58,528,-16,-17,16,16,16,6529,628,-628,52,21);

let result = QuickSort(arr,0,arr.length -1 );
console.log(arr);