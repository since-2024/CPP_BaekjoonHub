#include <iostream>
#include <deque>
using namespace std;

int n, m, x, idx, ans = 0;
deque<int> q;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    q.push_back(i);
  }

  while (m--)
  {
    cin >> x;

    for (int i = 0; i < q.size(); i++)
    {
      if (q[i] == x)
      {
        idx = i;
        break;
      }
    }

    if (idx <= q.size() / 2)
    {
      while (1)
      {
        if(q.front() == x)
        {
          q.pop_front();
          break;
        }

        q.push_back(q.front());
        q.pop_front();
        
        ans++;
      }
    }
    else
    {
      while (1)
      {
        if(q.front() == x)
        {
          q.pop_front();
          break;
        }

        q.push_front(q.back());
        q.pop_back();

        ans++;
      }
    }
  }

  cout << ans;
}