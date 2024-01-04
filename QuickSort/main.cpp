#include<iostream>
using namespace std;

int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i = low -1;

    for(int j =low; j<high; j++){
        if(arr[j]< pivot){
            i++;
            // Swap 
            // We Are tracking The spaces of smaller element space value which are less than pivot
            swap(arr[i],arr[j]);
        }
    }   
    i++;
    swap(arr[i],arr[high]);
    return i;
}

void quickSort(int arr[],int low, int high){
    if(low<high){
        int pivotIndex = partition(arr,low,high);

        quickSort(arr,low, pivotIndex-1); //Sorting Lower Element Than Pivot Index
        quickSort(arr,pivotIndex+1,high);//Sorting Higher Element Than Pivot Index
    }
}

int main(){
    int arr[] = {1,7,8,91,58,528,-16,6529,628,-628,52,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Let's Call The QuickSort Function
    quickSort(arr,0,n-1);

    for(int i=0; i<n ; i++){
       cout<<arr[i]<<" ";
    }

    return 0;
}