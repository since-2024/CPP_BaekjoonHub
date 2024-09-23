#include <bits/stdc++.h>
#define fi first;
#define se second;
using namespace std;

int n, a, b;
int dp[42] = {0, 1, 1};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  int arr[n];
  
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  n = *max_element(arr, arr+n);
  
  for (int i = 2; i <= n; i++)
    dp[i] = dp[i-2] + dp[i-1];
  
  for (int c : arr)
  {
     if (c == 0)
       cout << "1 0\n";
     else if (c == 1)
       cout << "0 1\n";
     else
       cout << dp[c-1] << " " << dp[c] << "\n";
  }
}