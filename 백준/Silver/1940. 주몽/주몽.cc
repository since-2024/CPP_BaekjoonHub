#include <bits/stdc++.h>
using namespace std;

#define MAX 15000

int n, m, ans;
int g[MAX];


int check()
{
  int k, ret = 0;
  int s = 0, e = n-1;
  
  while (s < e)
  {
    k = g[s] + g[e];
    
    if (k < m)
    {
      s++;
    }
    else if (k > m)
    {
      e--;
    }
    else
    {
      ret++;
      s++;
      e--;
    }
  }
  
  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i < n; i++)
    cin >> g[i];
  
  sort(g, g+n);
  
  ans = check();
  
  cout << ans;
}