#include <bits/stdc++.h>
using namespace std;

int h, m, k, t;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> h >> m;
  cin >> k;

  t = h * 60 + m + k;

  cout << (t / 60) % 24 << " " << t % 60;
}