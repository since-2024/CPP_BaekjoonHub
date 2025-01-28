#include <bits/stdc++.h>
using namespace std;

int point, t, f, s, p, c;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 2; i++)
  {
    cin >> t >> f >> s >> p >> c;
    
    point = (t * 6) + (f * 3) + (s * 2) + (p * 1) + (c * 2);
    cout << point << " ";
  }
}