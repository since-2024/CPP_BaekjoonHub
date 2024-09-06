#include <iostream>
#include <stack>
using namespace std;

string s;
int ans, idx, t, tmp = 1;
int stk[100001];
bool is_fail;

int adj(int c)
{
  t = -2;
  while (idx > 0)
  {
    t = stk[--idx];

    if (t > 1)
    {
      if (tmp == 1)
        tmp = 0;
      tmp += t;
    }
    else
      break;
  }

  if (c == 0 && t == 0)
  {
    stk[idx++] = 2 * tmp;
    tmp = 1;
  }
  else if (c == -1 && t == -1)
  {
    stk[idx++] = 3 * tmp;
    tmp = 1;
  }
  else
  {
    is_fail = true;
    tmp = -1;
  }

  return tmp;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  getline(cin, s);

  for (auto c : s)
  {
    if (c == '(')
    {
      stk[idx++] = 0;
      tmp = 1;
    }
    else if (c == '[')
    {
      stk[idx++] = -1;
      tmp = 1;
    }
    else
    {
      if (c == ')')
        tmp = adj(0);
      else
        tmp = adj(-1);

      if (tmp == -1)
      {
        is_fail = true;
        break;
      }
    }
  }

  if (is_fail)
  {
    cout << 0;
  }
  else
  {
    while (idx > 0)
    {
      t = stk[--idx];

      if (t < 1)
      {
        ans = 0;
        break;
      }
      else
      {
        ans += t;
      }
    }

    cout << ans;
  }
}