// SUM DIGIT
#include<iostream>
// #include<cmath>
using namespace std;
int main(){
    int a=INT_MAX;
    //POSITIVE INFINITY
    int b=INT_MIN;
    //NEGATIVE INFINITY
    int n;
    cin>>n;
    int rev=0;
    for(int i=n;i!=0;i=i/10){
        int k=i%10;
        rev=rev+k;

    }
    cout<<rev<<endl;
    cout<<abs(rev)<<endl;
    return 0;
}