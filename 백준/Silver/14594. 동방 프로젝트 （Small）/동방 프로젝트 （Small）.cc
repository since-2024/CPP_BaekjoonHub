#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int n, m, x, y, ans;
int g[MAX];


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i <= n; i++)
    g[i] = 1;

  while (m--)
  {
    cin >> x >> y;

    for (int i=x+1; i <= y; i++)
      g[i] = 0;
  }

  for (int i=1; i <= n; i++)
    ans += g[i];

  cout << ans;
}