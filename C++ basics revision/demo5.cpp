#include<iostream>
using namespace std;
int main(){
  int arr[10];
  cin >> arr[0]>>arr[1]>>arr[2];
  cout<< arr[0]<<"  "<<arr[5]<< "\n";

  string str = "oyee";
  cout << str[2];

  int a[3][5];
  a[1][3]=65;
  cout<< a[1][3]<<"\n";


  string s = "Ameya";
  int len= s.size();
  cout<<len<<"\n";
  s[0]='O';
  cout<<s;
  
  return 0;

}