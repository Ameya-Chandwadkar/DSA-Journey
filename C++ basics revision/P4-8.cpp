#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter number of rows";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        for(int k=i;k<=2*n-i-2;k++){
             cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}