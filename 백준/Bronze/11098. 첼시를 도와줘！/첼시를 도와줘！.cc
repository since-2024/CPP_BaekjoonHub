#include <bits/stdc++.h>
using namespace std;

int t, n, a;
string s, k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  while (t--)
  {
    cin >> n;
    
    int m=0;
    
    while (n--)
    {
      cin >> a >> s;
      
      if (m < a)
      {
        m = a;
        k = s;
      }     
    }
    
    cout << k << "\n";
  }
}