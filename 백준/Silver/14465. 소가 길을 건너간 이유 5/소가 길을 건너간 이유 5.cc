#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int n, k, b, a, sum, ans;
int v[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k >> b;
  
  for (int i=0; i<b; i++)
  {
    cin >> a;
    v[a-1] = 1;
  }
  
  for (int i=0; i<k; i++)
    sum += v[i];
  
  ans = sum;
  
  for (int i=0; i<n-k; i++)
  {
    sum = sum - v[i] + v[i+k];
    ans = min(ans, sum);
  }
  
  cout << ans;
}