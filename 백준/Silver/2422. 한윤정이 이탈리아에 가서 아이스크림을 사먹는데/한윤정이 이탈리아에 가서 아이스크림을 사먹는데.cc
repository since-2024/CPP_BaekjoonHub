#include <bits/stdc++.h>
using namespace std;

#define MAX 201

int n, m, a, b, ans;
bool v[MAX][MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i < m; i++)
  {
    cin >> a >> b;

    v[a][b] = true;
    v[b][a] = true;
  }

  for (int i=1; i<=n; i++)
  {
    for (int j=i+1; j<=n; j++)
    {
      if (v[i][j])
        continue;

      for (int k =j+1; k<=n; k++)
      {
        if (v[i][k] || v[j][k])
          continue;
        
        ans++;
      }
    }
  }

  cout << ans;
}