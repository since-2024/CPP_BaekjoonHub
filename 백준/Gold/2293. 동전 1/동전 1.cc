#include <bits/stdc++.h>
using namespace std;

int n, k, v;
int dp[10001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;

	dp[0] = 1;

	for (int i = 0; i < n; i++)
  {
		cin >> v;

		for (int j = v; j <= k; j++)
			dp[j] += dp[j - v];
	}

  cout << dp[k];
}