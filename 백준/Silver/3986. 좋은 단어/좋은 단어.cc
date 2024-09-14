#include <bits/stdc++.h>
using namespace std;

int n, ans;
string s;
stack<char> stk;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  while (n--)
  {
    cin >> s;

    if (s.length()%2 != 0)
      continue;

    for (auto c: s)
    {
      if (!stk.empty() && c == stk.top())
        stk.pop();
      else
        stk.push(c);
    }

    if (stk.empty())
      ans++;
    
    while (!stk.empty())
      stk.pop();
  }

  cout << ans;
}