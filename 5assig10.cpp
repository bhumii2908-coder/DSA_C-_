#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	bool num = false;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i][j]!=num){
				num = true;
				break;
			}
		}
	}
	if(num){
			cout<<"false";
		}
		else{
			cout<<"true";
		}
	return 0;
}