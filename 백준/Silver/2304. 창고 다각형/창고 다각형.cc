#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m, l, ans;
int x, y;
vector< pair<int, int> > V;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  while (n--)
  {
    cin >> x >> y;

    V.emplace_back(x, y);
  }

  sort(V.begin(), V.end(), [](auto a, auto b){
    if (a.X < b.X)
      return true;
    else
      return false;
  });

  // left area
  l = V[0].X;
  m = V[0].Y;

  for (auto& p : V)
  {
    if (m <= p.Y)
    {
      ans += (p.X - l) * m;
      m = p.Y;
      l = p.X;
    }
  }

  // top area
  ans += m;
  
  // right area
  l = V.back().X;
  m = V.back().Y;

  for (int i = V.size() - 1; i > -1; i--)
  {
    if (m < V[i].Y)
    {
      ans += (l - V[i].X) * m;
      m = V[i].Y;
      l = V[i].X;
    }
  }

  cout << ans;
}