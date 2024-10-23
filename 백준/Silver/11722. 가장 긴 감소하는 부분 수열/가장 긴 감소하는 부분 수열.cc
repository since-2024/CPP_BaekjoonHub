#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[1001], dp[1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  for (int i = n; i > 0; i--)
    cin >> arr[i];
  
  for (int i = 1; i<=n; i++)
  {
    for (int j = 0; j < i; j++)
      if (arr[i] > arr[j])
        dp[i] = max(dp[i], dp[j] + 1);
  }
  
  cout << *max_element(dp, dp + n+1);
}