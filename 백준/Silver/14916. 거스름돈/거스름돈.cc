#include <bits/stdc++.h>
using namespace std;

int n, r, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  ans = n / 5;
  r = n % 5;
  
  ans += r / 2;
  r %= 2;
  
  if (r == 1)
    ans += 2;
  
  if (n ==1 || n == 3)
    ans = -1;
  
  cout << ans;
}