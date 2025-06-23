#include <bits/stdc++.h>
using namespace std;

int n, m, line, cnt, a, b, k;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  while(n--)
  {
    a=0;
    k=0;
    
    cin >> s;
    
    for (auto c : s)
    {
      b = c-'0';
      
      if (a==0 && b==1)
        k++;
      
      a = b;
    }
    
    if (line < k)
    {
      line = k;
      cnt = 1;
    }
    else if (line == k)
    {
      cnt++;
    }
  }
  
  cout << line << " " << cnt;
}