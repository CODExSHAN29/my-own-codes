
 
//1. একটা এরে দেওয়া আছে. ওই array টাকে রিভার্স করতে হবে.
//ex: 1 6 9
//ans: 9 6 1
//hints: swap 2 number + class 13 a j 2 pointer korano hoiyeche palindrom er question a


#include <iostream>
using namespace std;
//input size
int main(){
int n;
cout<<"size";
cin>>n;
int arr[n];
 for (int i=0;i<n;i++){
    cout<<"elemnts:";
    cin>>arr[i];
 }

 cout<<endl;
 //reverse
int s=0;
int e=n-1;
while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--;
   
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;}