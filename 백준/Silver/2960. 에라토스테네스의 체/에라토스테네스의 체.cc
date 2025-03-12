#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, k, cnt, ans;
bool v[MAX];




int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  
  for (int i=2; i <= n; i++)
  {
    if (v[i])
      continue;
    
    int c = 1;
    
    while (i*c <= n)
    {
      if (v[i*c])
      {
        c++;
        continue;
      }
      
      v[i*c] = true;
      cnt++;
      
      if (k == cnt)
      {
        ans = i*c;
        break;
      }
      
      c++;
    }
    
    if (ans != 0)
      break;
  }
  
  cout << ans;
}