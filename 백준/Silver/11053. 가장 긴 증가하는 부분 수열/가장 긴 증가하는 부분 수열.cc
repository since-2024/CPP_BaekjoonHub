#include <bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  int val[n+1];
  val[0] = 0;
  
  for (int i = 1; i<=n; i++)
    cin >> val[i];
  
  vector<int> dp(n+1);
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = i-1; j >= 0; j--)
    {
      if (val[j] < val[i])
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  
  cout << *max_element(dp.begin(), dp.end());
}