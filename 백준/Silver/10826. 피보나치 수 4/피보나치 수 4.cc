#include <bits/stdc++.h>
using namespace std;

int n;
string dp[10010];

string SumString(string x, string y)
{
  int num, carry = 0;
  string res;
  
  reverse(x.begin(), x.end());
  reverse(y.begin(), y.end());
  
  while (x.length() < y.length())
    x += '0';
  while (x.length() > y.length())
    y += '0';
  
  for (int i = 0; i < x.length(); ++i)
  {
    num = x[i] - '0' + y[i] - '0' + carry;
    
    res += to_string(num % 10);
    carry = num / 10;
  }
  
  if (carry != 0)
    res += to_string(carry);
  
  reverse(res.begin(), res.end());
  
  return res;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  dp[0] = '0';
  dp[1] = '1';
  
  for (int i = 2; i <= n; i++)
    dp[i] = SumString(dp[i-2], dp[i-1]);
  
  cout << dp[n];
}