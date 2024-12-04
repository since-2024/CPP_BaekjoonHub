#include <bits/stdc++.h>
using namespace std;

string s;
int tmp, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  for (auto c : s)
  {
    tmp = int(c - 'A');
    if (c >= 'S')
      tmp--;
    if (c == 'Z')
      tmp--;
    
    ans += 3 + tmp / 3;
  }
  
  cout << ans;
}