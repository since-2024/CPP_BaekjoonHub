#include <bits/stdc++.h>
using namespace std;

int n, k, l=1, r=1;
string s;
bool ans;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  n = s.length();
  
  for (int i=0; i<n-1; i++)
  {
    r = 1;
    
    l *= s[i]-'0';
    
    for (int j=i+1; j<n; j++)
      r *= s[j]-'0';
    
    if (l == r)
    {
      ans = true;
      break;
    }
  }
  
  if (ans)
    cout << "YES";
  else
    cout << "NO";
}