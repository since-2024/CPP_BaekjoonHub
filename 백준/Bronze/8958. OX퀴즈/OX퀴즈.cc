#include <bits/stdc++.h>
using namespace std;

int n, t;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> t;

  while (t--)
  {
    int ans = 0;
    int cnt = 0;
    
    cin >> s;
    
    for (auto c : s)
    {
      if (c == 'O')
      {
        cnt++;
        ans += cnt;
      }
      else
        cnt = 0;
    }

    cout << ans << "\n";
  }
}