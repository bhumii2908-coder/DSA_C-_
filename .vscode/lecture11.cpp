#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // intialization
    vector<int>a;
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
// size
cout<<a.size()<<endl;
// capacity
cout<<a.capacity()<<endl;
// delete
a.pop_back();
// size
cout<<a.size()<<endl;
// capacity
cout<<a.capacity()<<endl;
for (int i=0;i<a.size();i++){
    cout<<a[i]<<" "; 

}
// first element
cout<<a.front()<<endl;
// last element
cout<<a.back()<<endl;

a.insert(a.end()+a.size()/2,6);
for (int i=0;i<a.size();i++){
    cout<<a[i]<<" "; 

}
// reverse
reverse(a.begin(),a.end());

// sort
sort(a.begin(),a.end());
return 0;
}