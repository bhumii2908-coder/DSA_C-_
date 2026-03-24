// DSA/String
// /Biggest_number.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m;
    cin>>m;
	for(int i=0;i<t;i++){
    vector<int> arr(m);
    for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<m;i++){
            cout<<arr[i];
        }
		cout<<endl;
	}
   return 0;
}