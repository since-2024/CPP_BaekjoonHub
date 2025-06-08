#include <bits/stdc++.h>
using namespace std;

int n, m;
string a[5], b[5];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i=0; i<n; i++)
    cin >> a[i];
  
  for (int i=0; i<m; i++)
    cin >> b[i];
  
  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      cout << a[i] << " as " << b[j] << "\n";
}