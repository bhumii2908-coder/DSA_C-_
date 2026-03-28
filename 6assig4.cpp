// String
// /can_you_read_this.cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(i>0 and isupper(s[i])){
            cout<<endl;
        }
        cout<<s[i];
    }
   return 0;
}