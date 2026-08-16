#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;

    for(int i=n;i>0;i--){
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
return 0;
}