#include <bits/stdc++.h>
using namespace std;

int t, a, b, k;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  while (t--)
  {
    cin >> s >> a >> b;
    
    k = s.length();
    
    for (int i=0; i<a; i++)
      cout << s[i];
    
    for (int i=b; i<k; i++)
      cout << s[i];
    
    cout << "\n";
  }
}