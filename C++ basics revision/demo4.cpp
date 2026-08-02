#include<iostream>
using namespace std;

int main(){
   cout<<"Enter age:";
   int age;
   cin>>age;
   if(age>=18 && age<60){
    cout<<"You are an adult";
   }
   else if(age>=60){
    cout<< "You are old adult";
   }
   else if (age<18){
    cout<< "You are not an adult";
   }
   return 0;
}