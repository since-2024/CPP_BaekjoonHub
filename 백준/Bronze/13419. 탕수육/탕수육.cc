#include <bits/stdc++.h>
using namespace std;

int t, n, k;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  while (t--)
  {
    cin >> s;
    k = s.length();
    
    if (k%2 == 0)
    {
      for (int i=0; i<k; i+=2)
      {
        cout << s[i];
      }
      cout << "\n";
      
      for (int i=1; i<k; i+=2)
      {
        cout << s[i];
      }
      cout << "\n";
    }
    else
    {
      s += s;
      
      for (int i=0; i<k*2; i+=2)
      {
        cout << s[i];
      }
      cout << "\n";
      
      for (int i=1; i<k*2; i+=2)
      {
        cout << s[i];
      }
      cout << "\n";
    }
  }
}