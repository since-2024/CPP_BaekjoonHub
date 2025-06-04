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
    
    int ans = 0;
    
    for (int i=0; i<s.length(); i++)
    {
      if (i <= (s.length()-2)
          && s[i] == 'W'
          && s[i+1] == 'O'
          && s[i+2] == 'W')
      {
        ans++;
      }
    }
    
    cout << ans << "\n";
  }
}