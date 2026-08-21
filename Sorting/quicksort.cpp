#include<iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j) {

        while (i <= high && pivot >= arr[i]) {
            i++;
        }

        while (j >= low && pivot <= arr[j]) {
            j--;
        }

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quicksort(int arr[],int low,int high){

    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }

}


int main(){
    int n;
    cout<<"Enter number of values to be put in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
    
}