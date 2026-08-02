#include<iostream>
using namespace std;

int main(){
    cout<< "Enter 2 names";
    string s1;
    string s2;
    cin>>s1; cin>>s2;
    cout << s1 << " " << s2;
    cin.ignore();
    string str;
    getline(cin,str);
    cout<< str;
    return 0;
}