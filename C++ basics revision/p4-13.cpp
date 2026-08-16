#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    int j=1;
    for(int i=0;i<n;i++){
       for(int k=0;k<i+1;k++){
        cout<<j<<" ";
        j=j+1;
       }
       cout<<endl;
    }
    return 0;
}