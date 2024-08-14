#include<iostream>
using namespace std;
int sum(int  , int );
void g();
int main(){


    
int num1,num2;



cout<<"the first number is :";
cin>>num1;
cout<<"enter the second number :";
cin>>num2;

cout<<sum(num1,num2);

    g();
    return 0;

}
int sum(int a , int b){
    int c =a+b;
    return c;
}
void g(){

    cout<<"\nHello titly";
}