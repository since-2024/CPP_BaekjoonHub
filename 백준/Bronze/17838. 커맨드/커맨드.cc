#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  while (t--)
  {
    cin >> s;
    
    if (s.length() == 7
        && s[0] == s[1]
        && s[0] == s[4]
        && s[2] == s[3]
        && s[2] == s[5]
        && s[2] == s[6]
        && s[0] != s[2])
      cout << "1\n";
    else
      cout << "0\n";
  }
}