#include <bits/stdc++.h>
using namespace std;

int n, ans;
char t;
string s;
bool succ;
int al[26];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  while (n--)
  {
    t = '0';
    succ = true;
    memset(al, 0, sizeof(al));
    
    cin >> s;
    
    for (char c : s)
    {
      if (c != t)
      {
        t = c;
        
        if (al[c - 'a'] > 0)
        {
          succ = false;
          break;
        }
        else
        {
          al[c - 'a']++;
        }
      }
    }
    
    if (succ)
      ans++;
  }
  
  cout << ans;
}