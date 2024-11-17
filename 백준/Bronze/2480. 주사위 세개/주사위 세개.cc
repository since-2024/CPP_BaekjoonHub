#include <bits/stdc++.h>
using namespace std;

int a, b, c, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> a >> b >> c;

  if (a == b && a == c)
  {
    ans = 10000 + (a * 1000);
  }
  else if (a != b && a != c && b != c)
  {
    ans = max(a, max(b, c)) * 100;
  }
  else
  {
    if (a == b || a == c)
      ans = 1000 + (a * 100);
    else
      ans = 1000 + (b * 100);
  }

  cout << ans;
}