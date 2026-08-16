#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number of rows:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
              cout<<" ";
            }
              for(int k=2*i+1;k>0;k--){
                cout<<"*";
              }
        
        cout<<endl;
        
    }
    return 0;
}