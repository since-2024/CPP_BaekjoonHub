#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, z;
int arr[101];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  while (m--)
  {
    cin >> x >> y >> z;
    
    for (int i = x; i<= y; i++)
      arr[i] = z;
  }
  
  for (int i = 1; i <= n; i++)
    cout << arr[i] << " ";
}