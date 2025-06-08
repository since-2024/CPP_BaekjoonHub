#include <bits/stdc++.h>
using namespace std;

string a, b;
int al, bl, n, m;
char c;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> a >> c >> b;

  al = a.length();
  bl = b.length();

  if (c == '*')
  {
    int t = al + bl - 2;

    cout << '1';
    for (int i=0; i<t; i++)
      cout << '0';
  }
  else
  {
    if (al == bl)
    {
      cout << '2';
      for (int i = 0; i < al - 1; i++)
      {
        cout << '0';
      }
    }
    else
    {
      n = max(al, bl);
      m = min(al, bl);

      for (int i=n; i>0; i--)
      {
        if (i == n || i == m)
          cout << '1';
        else
          cout << '0';
      }
    }
  }
}