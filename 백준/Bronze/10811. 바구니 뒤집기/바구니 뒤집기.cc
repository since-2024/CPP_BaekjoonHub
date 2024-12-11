#include <bits/stdc++.h>
using namespace std;

int n, m, x, y;
int arr[101];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i = 1; i <= n; i++)
    arr[i] = i;
  
  while (m--)
  {
    cin >> x >> y;
    
    reverse(arr+x, arr+y+1);
  }
  
  for (int i = 1; i <= n; i++)
    cout << arr[i] << " ";
}