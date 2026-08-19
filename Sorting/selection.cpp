#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of values in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers to do selection sort: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENtered array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n;i++){
        int temp;
        int curr_min=1000;
        int min_index=i;
        for(int j=i+1;j<n;j++){
        if(curr_min>arr[j]){
            curr_min=arr[j];
            min_index=j;
        }
        

    }
       if(arr[i]>curr_min){
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
       }

}
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}