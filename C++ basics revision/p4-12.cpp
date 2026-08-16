#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int k=i;k<2*n-i-2;k++){
            cout<<" ";
        }
        for(int k=i+1;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
}