#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int n, m, a, b;
int graph[MAX], sal[MAX];
queue<pair<int,int>> q;
bool visited[MAX];


int do_game()
{
  q.push(make_pair(1,0));
  
  while (!q.empty())
  {
    int k = q.front().first;
    int cnt = q.front().second;
    q.pop();
    
    for (int i=6; 1 <= i; i--)
    {
      int nk = k + i;

      if (nk == MAX-1)
        return cnt+1;

      if (MAX-1 < nk)
        continue;
      
      while (sal[nk] != 0)
      {
        nk = sal[nk];
      }
      
      if (!visited[nk])
      {
        q.push(make_pair(nk, cnt+1));
        visited[nk] = true;
      }
      
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i=0; i < n+m; i++)
  {
    cin >> a >> b;
    
    sal[a] = b;
  }
  
  int ans = do_game();
  
  cout << ans;
}