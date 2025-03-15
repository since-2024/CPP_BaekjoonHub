#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9

long long x, y, z;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> x >> y;

  z = y * 100 / x;

  if (z >= 99)
  {
    cout << -1;
  }
  else
  {
    int l = 0, r = MAX;

    while (l <= r)
    {
      int m = (l+r) / 2;
      int t = (y+m) * 100 / (x+m);

      if (z < t)
        r = m - 1;
      else
        l = m + 1;
    }

    cout << l;
  }
}