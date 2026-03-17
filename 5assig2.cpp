// Arrays-Spiral Print Anticlockwise
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int m, n;
   cin >> m >> n;
   vector<vector<int>> arr(m, vector<int>(n));
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cin >> arr[i][j];
      }
   }
   int left = 0, right = n - 1, top = 0, bottom = m - 1;
   while (left <= right and top <= bottom)
   {
      for (int i = top; i <= bottom; i++)
      {
         cout << arr[i][left] << ", ";
      }
      left++;
      for (int i = left; i <= right; i++)
      {
         cout << arr[bottom][i] << ", ";
      }
      bottom--;
      if (top <= bottom)
      {
         for (int i = bottom; i >= top; i--)
         {
            cout << arr[i][right] << ", ";
         }
         right--;
      }
      if (top <= bottom)
      {
         for (int i = right; i >= left; i--)
         {
            cout << arr[top][i] << ", ";
         }
      }
      top++;
   }
   cout<<"END";
   return 0;
}