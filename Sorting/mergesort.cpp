#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int k = high-low+1;
    int temp[k];
    int left=low;
    int right=mid+1;
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[i]=arr[left];
            i++;
            left++;
        }
        else{
            temp[i]=arr[right];
            i++;
            right++;
        }
    }
    if(left<=mid){
        while(left<=mid){
        temp[i]=arr[left];
        i++;
        left++;
        }
    }
    if(right<=high){
        while(right<=high){
            temp[i]=arr[right];
            i++;
            right++;
        }
    }
    for(int j=0;j<k;j++){
        arr[low+j]=temp[j];
        
    }

}
void mergesort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
      



    }
int main(){
    int n;
    cout<<"Enter number of values in the array:";
    cin>>n;
    cout<<"Enter the values: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    mergesort(arr,0,n-1);
   cout<<"Sorted array:";
   for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
   }
   return 0;
}