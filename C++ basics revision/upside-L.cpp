#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Put amount of rows: ";
    cin>>n;
    for(int i =0 ; i<n; i++){
        for(int j = i;j>0;j--){
            cout<<" ";

        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }



    return 0;
}