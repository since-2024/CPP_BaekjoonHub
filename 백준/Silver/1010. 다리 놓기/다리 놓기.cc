#include <bits/stdc++.h>
using namespace std;

int n, m, t;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;

  while(t--)
  {
    int ans = 1, cnt = 1;

    cin >> n >> m;

    for (int i = m; i > m - n; i--)
      ans = (ans * i) / cnt++;

    cout << ans << "\n";
  }
}