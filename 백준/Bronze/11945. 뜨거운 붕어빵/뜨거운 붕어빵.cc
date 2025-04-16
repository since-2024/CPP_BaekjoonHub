#include <bits/stdc++.h>
using namespace std;

#define MAX 10

int n, m;
char a[MAX][MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<m; j++)
      cin >> a[i][j];
  }
  
  for (int i=0; i<n; i++)
  {
    for (int j=m-1; j >= 0; j--)
      cout << a[i][j];
    cout << "\n";  
  }
}