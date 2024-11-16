#include <bits/stdc++.h>
using namespace std;

int h, m, t;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> h >> m;

  t = 1440 + h * 60 + m - 45;

  cout << (t / 60) % 24 << " " << t % 60;
}