#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number of values in the array:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    while(j>=0){
        int temp;
        for(int i=0;i<=j-1;i++){
            for(int k=i+1;k<=j;k++){
                if(arr[i]>arr[k]){
                    temp=arr[i];
                    arr[i]=arr[k];
                    arr[k]=temp;
                    break;
                }

            }
        }

        j=j-1;
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}