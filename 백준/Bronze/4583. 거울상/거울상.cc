#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  while (1)
  {
    string ans = "";
    bool fail = false;
    
    cin >> s;
    
    if (s == "#")
      break;
    
    for (auto c : s)
    {
      if (fail)
        break;
      
      switch (c)
      {
      case 'i':
      case 'o':
      case 'v':
      case 'w':
      case 'x':
        ans = c + ans;
        break;
      case 'b':
        ans = "d" + ans;
        break;
      case 'd':
        ans = "b" + ans;
        break;
      case 'p':
        ans = "q" + ans;
        break;
      case 'q':
        ans = "p" + ans;
        break;
      default:
        ans = "INVALID";
        fail = true;
        break;
      }
    }
    
    cout << ans << "\n";
  }
}