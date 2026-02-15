#include<iostream>
using namespace std;
int main() {
	int a,b,s;
	cin>>a>>b>>s;
	for(int i=a;i<=b;i+=s){
		cout<<i<<" ";
		int c=(i-32)*5/9;
		cout<<c<<endl;
	}
	return 0;
}