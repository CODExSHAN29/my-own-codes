// two pointer technique
#include<iostream>
using namespace std;
bool checkpalindrom(int a[],int size){

int start=0;
int end=size-1;
while (start<=end){
    if(a[start]!=a[end])return false;
start++;
end--;}
return true;
}
int main(){
    int a[]={1,3,3,1};
    int size=sizeof(a)/sizeof(a[0]);
    if(checkpalindrom(a,size)){
        cout<<"the array is palindrome"<<endl;

    }else{
        cout<<"it is not palindrome"<<endl;
    }
return 0;
}