#include <bits/stdc++.h>
using namespace std;

int j, n, k, ans;
string s;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> j >> n;
  cin.ignore();
  
  while (n--)
  {
    k = 0;
    
    getline(cin, s);
    
    for (auto c: s)
    {
      if (c == ' ')
        k += 1;
      else if ('A' <= c && c <= 'Z')
        k += 4;
      else
        k += 2;
    }
    
    if (k <= j)
      ans++;
  }
  
  cout << ans;
}