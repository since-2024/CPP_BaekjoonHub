#include <bits/stdc++.h>
using namespace std;

int n;
string s[20000];

int cmp(string a, string b)
{
  if (a.length() == b.length())
  {
    return a < b;
  }
  else
  {
    return a.length() < b.length();
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  sort(s, s + n, cmp);

  for (int i = 0; i < n; i++)
  {
    if (s[i] == s[i-1])
      continue;

    cout << s[i] << "\n";
  }
}