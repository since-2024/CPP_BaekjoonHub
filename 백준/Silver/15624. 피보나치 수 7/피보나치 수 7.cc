#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int n, k1, k2, t;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  switch(n)
  {
    case 0:
      cout << 0;
      break;
    case 1:
    case 2:
      cout << 1;
      break;
    default:
      k1 = 1;
      k2 = 1;

      for (int i = 3; i <= n; i++)
      {
        t = k1;
        k1 = (k1 + k2) % MOD;
        k2 = t;
      }

      cout << k1;
      break;
  }
}