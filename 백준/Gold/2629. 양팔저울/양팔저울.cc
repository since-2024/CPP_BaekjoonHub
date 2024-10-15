#include <bits/stdc++.h>
using namespace std;

int n, t, k;
int W[30];
bool dp[31][40001];

void Check(int idx, int v)
{
  if (!dp[idx][v] && idx <= n && v <= 40000)
  {
    dp[idx][v] = true;
    
    Check(idx+1, v);
    Check(idx+1, v + W[idx]);
    Check(idx+1, abs(v - W[idx]));
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 0; i<n; i++)
    cin >> W[i];
  
  Check(0, 0);
  
  cin >> t;
  
  while(t--)
  {
    cin >> k;
    
    if (dp[n][k])
      cout << "Y ";
    else
      cout << "N ";
  }
}