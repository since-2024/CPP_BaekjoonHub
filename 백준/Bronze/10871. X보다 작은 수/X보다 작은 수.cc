#include <bits/stdc++.h>
using namespace std;

int n, k, x;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> x;

  while (n--)
  {
    cin >> k;

    if (k < x)
      cout << k << " ";
  }
}