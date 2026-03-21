#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<vector<int>> arr(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int j=0;j<n;j++){
		reverse(arr[j].begin(),arr[j].end());
	}
		for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}