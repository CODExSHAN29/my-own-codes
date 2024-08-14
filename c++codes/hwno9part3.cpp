#include<iostream>
using namespace std;
bool findNum(int a[],int size,int target){
    for(int i=0;i<size;++i)
    if (a[i]==target){
    
        return true;
                                                                                         
    }
    return false;

}

int main(){
    int size;
    cout<<"the size of array is :";
    cin>>size;

int a[size];
cout<<"the elemants of the array:";
for (int i=0;i<size;++i){
    cin>>a[i];


}
int target;
cout<<"the target number:";
cin>>target;
if (findNum(a, size, target)) {
        cout << "The number is in the array." << endl;
    } else {
        cout << "The number is not in the array." << endl;
    }


return 0;
}