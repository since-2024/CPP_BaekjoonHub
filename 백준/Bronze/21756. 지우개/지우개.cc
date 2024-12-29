#include <bits/stdc++.h>
using namespace std;

int n;
int v[101], tmp[101];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 0; i < n; i++)
    v[i] = i+1;
  

  while (n > 1)
  {
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 1)
      {
        tmp[idx] = v[i];
        idx++;
      }
    }

    n /= 2;

    for (int i = 0; i < n; i++)
      v[i] = tmp[i];
  }

  cout << v[0];
}