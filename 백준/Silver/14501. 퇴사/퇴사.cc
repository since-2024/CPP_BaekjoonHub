#include <bits/stdc++.h>
using namespace std;

int n, w, v;
int dp[16];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    cin >> w >> v;
    
    if (i + w <= n)
      dp[i + w] = max(dp[i+w], dp[i] + v);
    
    dp[i+1] = max(dp[i+1], dp[i]);
  }

  cout << dp[n];
}