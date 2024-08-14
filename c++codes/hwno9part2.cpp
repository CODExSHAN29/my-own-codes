#include<iostream>
using namespace std;
int evenfinder(int a){

   
    if (a%2==0){cout<<"it is even so the output is:"<<" ";
    return 1;}
     else {cout<<"the number odd so the out put is :"<<" ";
    return -1;}
    
}


int main(){
int a;
cout<<"the input for the number:";
cin>>a;
cout<<evenfinder(a);
return 0;
}