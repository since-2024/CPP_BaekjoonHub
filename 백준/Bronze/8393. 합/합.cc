#include <bits/stdc++.h>
using namespace std;

int n, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  ans = n;

  while(n--)
    ans += n;
  
  cout << ans;
}