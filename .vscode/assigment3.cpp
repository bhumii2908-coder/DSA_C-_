#include<iostream>
using namespace std;
int main() {
	
	int n1,n2;
	cin>>n1>>n2;
	for(int i=2;i<=n1;i++){
		int k=3*i+2;
		if(k%n2==0){
			n1++;
		}
		else{
			cout<<k<<endl;
		}
	}
	return 0;
}