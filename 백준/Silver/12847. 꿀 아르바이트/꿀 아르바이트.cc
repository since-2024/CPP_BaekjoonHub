#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int n, m;
long long sum, ans;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i<n; i++)
    cin >> a[i];
  
  for (int i=0; i<m; i++)
    sum += a[i];
  
  ans = sum;
  
  for (int i=0; i < n-m; i++)
  {
    sum = sum - a[i] + a[i+m];
    
    ans = max(ans, sum);
  }
  
  cout << ans;
}