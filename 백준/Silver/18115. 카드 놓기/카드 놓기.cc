#include <bits/stdc++.h>
using namespace std;

int n, t, k;
deque<int> q;
int cmd[1000002];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
    
  for (int i = n; i > 0; i--)
  {
    cin >> t;
    
    cmd[i] = t;
  }
  
  for (int i = 1; i <= n; i++)
  {
    k = cmd[i];
    
    switch (k)
    {
    case 1:
      q.push_back(i);
      break;
    case 2:
      t = q.back();
      q.pop_back();
      q.push_back(i);
      q.push_back(t);
      break;
    case 3:
      q.push_front(i);
      break;
    }
  }
  
  for (int i = n; i > 0; i--)
  {
    cout << q.back() << " ";
    q.pop_back();
  }  
}