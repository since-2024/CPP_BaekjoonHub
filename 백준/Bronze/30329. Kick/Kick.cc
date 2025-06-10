#include <bits/stdc++.h>
using namespace std;

int ans;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  for (int i=0; i+3 < s.length(); i++)
  {
    if (s.substr(i, 4) == "kick")
      ans++;
  }

  cout << ans;
}