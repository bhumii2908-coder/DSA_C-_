// Arrays-Max Value In Array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
   return 0;
}
