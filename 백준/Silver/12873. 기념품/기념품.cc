#include <bits/stdc++.h>
using namespace std;

int n, k;
queue<int> q;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 1; i <= n; i++)
    q.push(i);
  
  for (int i = 1; i < n; i++)
  {
    long long int t = pow(i, 3);
    t--;
    t = t % q.size();
    
    while (t--)
    {
      k = q.front();
      q.pop();
      q.push(k);
    }
    
    q.pop();
  }
  
  cout << q.front();
}