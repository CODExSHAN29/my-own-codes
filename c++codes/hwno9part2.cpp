#include<iostream>
using namespace std;
int evenfinder(int a){

   
    if (a%2==0){cout<<"it is even so the output is:"<<" ";
    return 1;}
     else {cout<<"the number odd so the out put is :"<<" ";
    return -1;}
    
}


int main(){
int ab;
cout<<"the input for the number:";
cin>>ab;
cout<<evenfinder(ab);
return 0;
}