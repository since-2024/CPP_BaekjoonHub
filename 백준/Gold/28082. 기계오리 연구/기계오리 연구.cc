#include <bits/stdc++.h>
#define MAX (int)50001
#define INF (int)1e9
using namespace std;

int n, k, c;
vector<int> dp(MAX, INF);
vector<int> ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  dp[0] = 0;

  while (n--)
  {
    cin >> c;

    for (int i = MAX - c - 1; i >= 0; i--)
      dp[i + c] = min(dp[i + c], dp[i] + 1);
  }

  for (int i = 1; i < MAX; i++)
  {
    if (dp[i] <= k)
      ans.push_back(i);
  }

  cout << ans.size() << "\n";

  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
}