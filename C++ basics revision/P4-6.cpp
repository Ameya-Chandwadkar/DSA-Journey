#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number of rows:";
    int n;
    cin>>n;
    int ni;
    ni=n;
    for(int i=1;i<n;i++){
        for(int j=1;j<=ni;j++){
            cout<<j;
        }
        cout<<endl;
        ni--;
    }
}