#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> t;
  
  while (t--)
  {
    cin >> n >> s;
    
    for (auto c : s)
    {
      for(int i = 0; i < n; i++)
      {
        cout << c;
      }
    }
    
    cout << "\n";
  }
}