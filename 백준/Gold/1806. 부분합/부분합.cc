#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int n, s, l, r, cnt, sum, ans=1e9;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  
  for (int i=0; i<n; i++)
    cin >> a[i];
  
  sum = a[0];
  cnt = 1;
  
  while (r < n)
  {
    if (sum < s)
    {
      sum += a[++r];
      cnt++;
    }
    else if (sum >= s)
    {
      ans = min(ans, cnt);
      sum -= a[l++];
      cnt--;
    }
  }
  
  if (ans == 1e9)
    ans = 0;
  
  cout << ans;
}