# include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    // hum pehkle se assume kr rhe h ki num prime hoga
    for (int i=2;i<=n;i++){
    if(n%i==0){
        ans=false;
    }
}
if(ans){
    cout<<"prime h"<<endl;
}
else{
    cout<<"prime nahi h"<<endl;
}
return 0;
}