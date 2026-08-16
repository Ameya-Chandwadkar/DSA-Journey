#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            if(i==1){
                cout<<"0" "1";
            }
            else{
                for(int k=0;k<i-1;k++){
                    cout<<"0" "1";
                }
                cout<<endl;
            
        }}
        else{cout<<"1";
            
                
                if(i>0){
                    for(int k=0;k<i-1;k++){
                    cout<<"0" "1";
                }
                }

            
            cout<<endl;

        }
    }
    return 0;
}