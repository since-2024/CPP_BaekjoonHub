#include <bits/stdc++.h>
using namespace std;

int ans=1, l;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  
  l = s.length();
  for (int i = 0; i < l / 2; i++)
  {
    if (s[i] != s[l-1-i])
    {
      ans = 0;
      break;
    }
  }
  
  cout << ans;
}