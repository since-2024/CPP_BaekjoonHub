#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int arr[100][100];
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      cin >> arr[i][j];
  
  
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<m; j++)
    {
      cin >> k;
      cout << arr[i][j] + k << " ";
    }
    
    cout << "\n";
  }
}