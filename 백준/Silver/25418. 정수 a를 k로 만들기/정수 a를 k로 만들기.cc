#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MAX 1000000

int a, k, ans;
queue<pair<int,int>> q;
bool v[MAX+1];


int bfs()
{
  while (!q.empty())
  {
    int b = q.front().fi;
    int c = q.front().se;
    q.pop();
    
    if (b == k)
      return c;
    
    int b1 = b+1;
    int b2 = b*2;
    
    if (!v[b1])
    {
      q.push(make_pair(b1,c+1));
      v[b1] = true;
    }
    
    if (b2 <= MAX && !v[b2])
    {
      q.push(make_pair(b2,c+1));
      v[b2] = true;
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> a >> k;
  
  q.push(make_pair(a,0));
  ans = bfs();
  
  cout << ans;
}