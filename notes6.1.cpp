#include<iostream>
// #include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    for(int i=n;i!=0;i=i/10){
        int k=i%10;
        rev=rev*10+k;

    }
    cout<<rev<<endl;
    return 0;
}