#include <bits/stdc++.h>
using namespace std;

#define MAX 501

int n, k;

vector<vector<int>> v(MAX, vector<int>(MAX, 0));
vector<vector<int>> dp(MAX, vector<int>(MAX, 0));

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> v[i][j];
		}
	}
  
  dp[1][1] = v[1][1];
  
  for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + v[i][j];
		}
	}

	cout << *max_element(dp[n].begin(), dp[n].end());
}