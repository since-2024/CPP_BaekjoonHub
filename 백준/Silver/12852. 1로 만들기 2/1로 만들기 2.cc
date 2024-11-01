#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  dp[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    dp[i] = i;

    if (i%2 == 0)
      dp[i] = min(dp[i], dp[i/2]);

    if (i%3 == 0)
      dp[i] = min(dp[i], dp[i/3]);
    
    dp[i] = min(dp[i], dp[i-1]) + 1;
  }

  cout << dp[n] - 1 << "\n";
  
  while (n > 0)
  {
    cout << n << " ";

    if (dp[n] == dp[n-1] + 1)
      n--;
    else if (n%2 == 0 && dp[n] == dp[n/2] + 1)
      n /= 2;
    else if (n%3 == 0 && dp[n] == dp[n/3] + 1)
      n /= 3;
  }
}