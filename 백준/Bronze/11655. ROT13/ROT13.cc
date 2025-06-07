#include <bits/stdc++.h>
using namespace std;

string s;
char k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  getline(cin, s);

  for (auto c : s)
  {
    if ('a' <= c)
    {
      if (c < 'n')
        k = c + 13;
      else
        k = c - 13;
    }
    else if('A' <= c)
    {
      if (c < 'N')
        k = c + 13;
      else
        k = c - 13;
    }
    else
    {
      k = c;
    }

    cout << k;
  }
}