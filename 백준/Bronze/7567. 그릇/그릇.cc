#include <bits/stdc++.h>
using namespace std;

int ans;
string s;
char k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  for (auto c : s)
  {
    if (c == k)
    {
      ans += 5;
    }
    else
    {
      k = c;
      ans += 10;
    }
  }
  
  cout << ans;
}