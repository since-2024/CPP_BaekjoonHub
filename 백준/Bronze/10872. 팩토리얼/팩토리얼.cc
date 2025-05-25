#include <bits/stdc++.h>
using namespace std;

int n, ans=1;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 1; i <= n; i++)
	{
		ans *= i;
	}

  cout << ans;
}