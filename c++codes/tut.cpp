#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}

int & swapReserveVar(int &a, int &b){

    int temp =a ;
    a = b;
    b= temp;
  return a;
}
int main(){
    int a , b;
    cin>>a;
    cin>>b;
    cout<<" the value of a is "<<a<<" "<<"the value of y is" <<b
    ;
    swapReserveVar(a,b)=797;
     cout<<"\nthe value of x is"<<a<<" "<<"the value of y is"<<b;
     
}
