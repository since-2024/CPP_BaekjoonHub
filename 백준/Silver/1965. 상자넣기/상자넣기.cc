#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1001], dp[1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  
  for (int i = 1; i <= n; i++)
  {
    dp[i] = 1;
    
    for (int j = 1; j < i; j++)
    {
      if (arr[j] < arr[i])
        dp[i] = max(dp[j] + 1, dp[i]);
    }
  }
  
  cout << *max_element(dp, dp+n+1);
}