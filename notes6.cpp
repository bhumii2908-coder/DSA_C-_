#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    // hum pehkle se assume kr rhe h ki num prime hoga
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
        ans=false;
        }
    }
    if(ans){
        cout<<"prime h";
    }
    else{
        cout<<"prime nahi h";
    }
    return 0;
}