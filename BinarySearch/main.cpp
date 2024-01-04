#include<iostream>
using namespace std;

int binarySearch(int arr[], int x,int length){
    int low = 0;
    int high = length-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == x)
            return mid;

        if(arr[mid] <x)
            high = mid -1;
        else
            low = mid+1;
    }

    return -1;
}

int main(void){
    int arr[] = {2,3,4,10,50,100,730};
    int length =  sizeof(arr)/sizeof(arr[0] -1);
    int x = 10;

    cout<<binarySearch(arr,x,length)<<endl;
}