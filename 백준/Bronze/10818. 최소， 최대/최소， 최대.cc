#include <bits/stdc++.h>
using namespace std;

int n, k;
int b = -1e7, s = 1e7;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  while (n--)
  {
    cin >> k;

    if (b < k)
      b = k;
    if (k < s)
      s = k;
  }

  cout << s << " " << b;
}