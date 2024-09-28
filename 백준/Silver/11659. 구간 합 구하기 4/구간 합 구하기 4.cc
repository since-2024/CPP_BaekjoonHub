#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  int val[n+1];
  val[0] = 0;
  
  for (int i = 1; i<=n; i++)
    cin >> val[i];
  
  vector<int> dp(n+1);
  
  for (int i = 1; i <= n; i++)
  {
    dp[i] = dp[i-1] + val[i];
  }
  
  while (m--)
  {
    cin >> a >> b;
    cout << dp[b] - dp[a-1] << "\n";
  }
}