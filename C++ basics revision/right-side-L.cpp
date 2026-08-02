#include<iostream>

using namespace std;

int main(){
    int n;
    cout<< "Give me number of rows: ";
    cin >>n;
    cout<<"\n";

    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            cout<<" ";
        }
        for(int j=i+1;j>0;j--){
           cout<<"*";
        }
        cout<<"\n";

    }
    
    return 0;
}