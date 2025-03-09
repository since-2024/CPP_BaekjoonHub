#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int n, m, x, y, ans;
bool g[MAX];


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i=0; i <= n; i++)
    g[i] = true;

  while (m--)
  {
    cin >> x >> y;

    for (int i=x+1; i <= y; i++)
      g[i] = false;
  }

  for (int i=1; i <= n; i++)
    if (g[i])
      ans++;

  cout << ans;
}