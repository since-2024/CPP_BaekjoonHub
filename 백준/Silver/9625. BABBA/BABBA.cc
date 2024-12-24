#include <bits/stdc++.h>
using namespace std;

int n;
int da[46], db[46];


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  da[1] = 0;
  db[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    da[i] = db[i-1];
    db[i] = db[i-1] + da[i-1];
  }

  cout << da[n] << " " << db[n];
}