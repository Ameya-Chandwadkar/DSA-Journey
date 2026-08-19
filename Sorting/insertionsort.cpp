#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number of values in array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTER VALUES: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i;j>=0;j--){
            int k=j+1;
            if(arr[k]<arr[j]){
                temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
                k=k-1;
            }
            else{break;
            
            }
        

        }
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}