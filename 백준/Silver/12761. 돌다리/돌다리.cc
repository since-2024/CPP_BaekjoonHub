#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, m, a, b;
int g[MAX];
queue<int> q;

bool r_ch(int x)
{
  if (x < 0 || MAX <= x)
    return false;
  else
    return true;
}

void bfs()
{
  while (!q.empty())
  {
    int x = q.front();
    q.pop();
    
    if (g[m] != 0)
      return;
    
    if (r_ch(x+1) && g[x+1] == 0)
    {
      q.push(x+1);
      g[x+1] = g[x] + 1;
    }
    if (r_ch(x-1) && g[x-1] == 0)
    {
      q.push(x-1);
      g[x-1] = g[x] + 1;
    }
    
    if (r_ch(x+a) && g[x+a] == 0)
    {
      q.push(x+a);
      g[x+a] = g[x] + 1;
    }
    if (r_ch(x-a) && g[x-a] == 0)
    {
      q.push(x-a);
      g[x-a] = g[x] + 1;
    }
    
    if (r_ch(x+b) && g[x+b] == 0)
    {
      q.push(x+b);
      g[x+b] = g[x] + 1;
    }
    if (r_ch(x-b) && g[x-b] == 0)
    {
      q.push(x-b);
      g[x-b] = g[x] + 1;
    }
    
    if (r_ch(x*a) && g[x*a] == 0)
    {
      q.push(x*a);
      g[x*a] = g[x] + 1;
    }
    if (r_ch(x*b) && g[x*b] == 0)
    {
      q.push(x*b);
      g[x*b] = g[x] + 1;
    }
  }
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> a >> b >> n >> m;
  
  q.push(n);
  g[n] = 1;
  
  bfs();
  
  cout << g[m] - 1;
}