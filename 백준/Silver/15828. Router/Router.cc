#include <bits/stdc++.h>
using namespace std;

int n, k, t;
queue<int> q;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  while (1)
  {
    cin >> t;
    
    if (t == -1)
      break;
    else if (t == 0)
      q.pop();
    else if (q.size() < n)
      q.push(t);
  }
  
  if (q.empty())
    cout << "empty";
  else
    while (!q.empty())
    {
      cout << q.front() << " ";
      q.pop();
    }
}