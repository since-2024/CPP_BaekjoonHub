#include <bits/stdc++.h>
using namespace std;

string s, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  for (auto c: s)
  {
    if (c < 'a')
      ans += char(c - 'A' + 'a');
    else
      ans += char(c - 'a' + 'A');
  }
  
  cout << ans;
}