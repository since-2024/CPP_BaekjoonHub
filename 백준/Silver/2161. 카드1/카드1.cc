#include <bits/stdc++.h>
using namespace std;

int n, t;
queue<int> q;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  for (int i = 1; i <= n; i++)
    q.push(i);
  
  while (n--)
  {
    cout << q.front() << " ";
    q.pop();

    t = q.front();
    q.pop();
    q.push(t);
  }
}