#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, k, sum, ans;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  
  for (int i=0; i<n; i++)
    cin >> a[i];
  
  for (int i=0; i<k; i++)
    sum += a[i];
  
  ans = sum;
  
  for (int i=0; i<n-k; i++)
  {
    sum += a[i+k] - a[i];
    
    ans = max(ans, sum);
  }
  
  cout << ans;
}