#include <bits/stdc++.h>
#define MOD 1000000000
using namespace std;

int n;
int dp[1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  dp[1] = dp[3] = dp[4] = 1;
  dp[2] = 0;
  
  for (int i = 5; i <= n; i++)
    if (dp[i-4] + dp[i-3] + dp[i-1] != 3)
      dp[i] = 1;
  
  if (dp[n] == 1)
    cout << "SK";
  else
    cout << "CY";
}