#include <bits/stdc++.h>
using namespace std;

#define MAX 250000

int n, x, sum, ans, cnt;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> x;
  
  for (int i=0; i<n; i++)
    cin >> a[i];
  
  for (int i=0; i<x; i++)
    sum += a[i];
  
  ans = sum;
  cnt = 1;
  
  for (int i=0; i<n-x; i++)
  {
    sum += a[i+x] - a[i];
    
    if (ans < sum)
    {
      ans = sum;
      cnt = 1;
    }
    else if (ans == sum)
      cnt++;
  }
  
  if (ans == 0)
    cout << "SAD";
  else
    cout << ans << "\n" << cnt;
}