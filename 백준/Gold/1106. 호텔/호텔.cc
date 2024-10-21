#include <bits/stdc++.h>
using namespace std;

int n, target, cost, person;
int dp[100001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> target >> n;
  
  while (n--)
  {
    cin >> cost >> person;
    
    for (int i = cost; i <= 100000; i++)
      dp[i] = max(dp[i], dp[i-cost] + person);
  }
  
  for (int i = 1; i<=100000; i++)
  {
    if (dp[i] >= target)
    {
      cout << i;
      break;
    }
  }
}