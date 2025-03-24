#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

int n, m, l, r, ans, s;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i<n; i++)
    cin >> a[i];
  
  s = a[0];
  
  while (r < n)
  {
    if (s < m)
    {
      s += a[++r];
    }
    else if (s > m)
    {
      s -= a[l++];
    }
    else
    {
      ans++;
      s -= a[l++];
    }
  }
  
  cout << ans;
}