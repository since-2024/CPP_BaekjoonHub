#include <bits/stdc++.h>
using namespace std;

int x, n, a, b;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> x >> n;

  while(n--)
  {
    cin >> a >> b;

    x -= a * b;
  }
  
  if (x == 0)
    cout << "Yes";
  else
    cout << "No";
}