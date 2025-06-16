#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool s_find;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  while (n--)
  {
    cin >> s;
    
    for (auto c: s)
    {
      if (c == 'S')
      {
        cout << s;
        
        s_find = true;
        break;
      }
    }
    
    if (s_find)
      break;
  }
}