#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  while(n--)
  {
    int cnt=0;
    
    cin >> s;
    
    for (auto c: s)
      if (c == 'O')
        cnt++;
    
    if (m/2 < cnt)
      ans++;
  }
  
  cout << ans;
}