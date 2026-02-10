#include<iostream>
using namespace std;
// MAX ELEMENT
int main(){
int n;
cin>>n;
int  arr  [n];
for (int i=0;i<n;i++){
    cout<<arr[i];
 }
int ans=__INT_MIN__;;
for (int i=0;i<n;i++){
    if(ans<arr[i]){
        ans=arr[i]
    }
 } 
 cout<<ans<<endl;   
 return 0;
}
