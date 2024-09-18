#include <bits/stdc++.h>
using namespace std;

int n;
double a, b;
string s;
double alp[27];
stack<double> stk;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout << fixed;
  cout.precision(2);

  cin >> n;

  cin >> s;

  for (int i = 0; i < n; i++)
    cin >> alp[i];

  for (char c : s)
  {
    if ('A' <= c && c <= 'Z')
      stk.push(alp[c - 'A']);
    else
    {
      a = stk.top();
      stk.pop();
      b = stk.top();
      stk.pop();

      if(c == '+')
        stk.push(b + a);
      else if(c == '-')
        stk.push(b - a);
      else if (c == '*')
        stk.push(b * a);
      else if(c == '/')
        stk.push(b / a);
    }
  }

  cout << stk.top();
}