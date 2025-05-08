#include <bits/stdc++.h>
using namespace std;

bool ch[26];

int i;
string s, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  for (auto c : s)
  {
    ch[c-'A'] = true;
  }
  
  if (ch[0])
  {
    ans = regex_replace(s, regex("[BCDF]"), "A");
  }
  else if (ch[1])
  {
    ans = regex_replace(s, regex("[CDF]"), "B");
  }
  else if (ch[2])
  {
    ans = regex_replace(s, regex("[DF]"), "C");
  }
  else
  {
    ans = regex_replace(s, regex("[A-Z]"), "A");
  }
  
  cout << ans;
}