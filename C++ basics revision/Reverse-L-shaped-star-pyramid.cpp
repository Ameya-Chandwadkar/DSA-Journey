#include<iostream>
using namespace std;

int main(){
    // printing L shaped star pyramid
    cout<<"Enter number of rows:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}