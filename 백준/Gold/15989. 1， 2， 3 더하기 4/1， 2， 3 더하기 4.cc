#include <bits/stdc++.h>
using namespace std;

int t, m;
int arr[10001];
int dp[10001][3];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> t;

  for (int i = 0; i < t; i++)
    cin >> arr[i];
  
  m = *max_element(arr, arr + t);

  dp[1][0] = 1;
  dp[2][0] = dp[2][1] = 1;
  dp[3][0] = dp[3][1] = dp[3][2] = 1;
  
  for (int i = 4; i <= m; i++)
  {
    dp[i][0] = 1;
    dp[i][1] = dp[i-2][0] + dp[i-2][1];
    dp[i][2] = dp[i-3][0] + dp[i-3][1]+ dp[i-3][2];
  }

  for (int i = 0; i<t; i++)
  {
    int n = arr[i];

    cout << dp[n][0] + dp[n][1] + dp[n][2] << "\n";
  }
}