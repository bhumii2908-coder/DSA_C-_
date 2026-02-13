#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n;
cin>>n;
int og=n;
int temp=n;
int sum=0;
// digit calcution 
int i=0;
while(temp!=0){
    temp=temp/10;
    i++;
}
// power niklana and add karna
int l=0;
while(n!=0){
    int k=n%10;
    sum=sum+pow(k,l);








    
    n=n/10;
}
// comparre krna
if(og==sum){
    cout<<"Armostrong"<<endl;
}
else{
    cout<<"Not Armostrong"<<endl;
}
return 0;
}