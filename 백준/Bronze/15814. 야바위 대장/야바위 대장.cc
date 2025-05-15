#include <bits/stdc++.h>
using namespace std;

int t, a, b;
string s;
char k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s >> t;
  
  while (t--)
  {
    cin >> a >> b;
    
    k = s[a];
    s[a] = s[b];
    s[b] = k;
  }
  
  cout << s;
}