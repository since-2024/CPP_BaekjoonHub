#include <bits/stdc++.h>
using namespace std;

string x, y, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> x >> y;
  
  for (int i = 2; i >= 0; i--)
  {
    if (x[i] > y[i])
    {
      ans = x;
      break;
    }
    else if (x[i] < y[i])
    {
      ans = y;
      break;
    }
  }
  
  cout << ans[2] << ans[1] << ans[0];
}