#include <bits/stdc++.h>
using namespace std;

int n;
long long ans=1;
int dp[10001][2];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  if (n == 0)
    cout << 1;
  else
  {
    for (int i = 1; i <=n; i++)
      ans *= i;
    
    cout << ans;
  }
}