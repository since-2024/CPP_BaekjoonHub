#include <bits/stdc++.h>
using namespace std;

#define MAX 11

int n, c, p, ans;
int a[MAX];
bool v[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> c >> p;
    
    if (!v[c])
    {
      v[c] = true;
      a[c] = p;
    }
    else
    {
      if (a[c] != p)
      {
        a[c] = p;
        ans++;
      }
    }
  }
  
  cout << ans;
}