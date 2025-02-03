#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int a, b, k, c, t;
queue<pair<int,int>> q;
bool visited[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> a >> b;
  
  q.push(make_pair(a,0));
  visited[a] = true;
  
  while(!q.empty())
  {
    k = q.front().first;
    c = q.front().second;
    q.pop();
    
    if (k == b)
    {
      cout << c;
      break;
    }
    
    t = k-1;
    if (0 <= t && t < MAX && !visited[t])
    {
      q.push(make_pair(t, c+1));
      visited[t] = true;
    }
    
    t = k+1;
    if (0 <= t && t < MAX && !visited[t])
    {
      q.push(make_pair(t, c+1));
      visited[t] = true;
    }
    
    t = k * 2;
    if (0 <= t && t < MAX && !visited[t])
    {
      q.push(make_pair(t, c+1));
      visited[t] = true;
    }
  }
}