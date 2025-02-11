#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MAX 1500

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int r, c, ans;
pair<int,int> s;
queue<pair<int,int>> q, nq, sq, snq;

char graph[MAX][MAX];
bool v[MAX][MAX];
bool ck;


void meeting()
{
  while(!sq.empty() && !ck)
  {
    int x = sq.front().fi;
    int y = sq.front().se;
    sq.pop();
    
    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || r <= nx || c <= ny)
        continue;
      
      if (graph[nx][ny] == '.' && !v[nx][ny])
        sq.push(make_pair(nx, ny));
      else if (graph[nx][ny] == 'X' && !v[nx][ny])
        snq.push(make_pair(nx, ny));
      else if (graph[nx][ny] == 'L' && !v[nx][ny])
      {
        ck = true;
        break;
      }

      v[nx][ny] = true;
    }
  }
}

void melting()
{
  while(!q.empty())
  {
    int x = q.front().fi;
    int y = q.front().se;
    q.pop();
    
    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || ny < 0 || r <= nx || c <= ny)
        continue;
      
      if (graph[nx][ny] == 'X')
      {
        graph[nx][ny] = '.';
        nq.push(make_pair(nx, ny));
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> r >> c;
  
  for (int i=0; i < r; i++)
  {
    for (int j=0; j < c; j++)
    {
      cin >> graph[i][j];
      
      if (graph[i][j] != 'X')
        q.push(make_pair(i, j));
      
      if (graph[i][j] == 'L')
        s = make_pair(i, j);
    }
  }

  sq.push(s);
  v[s.fi][s.se] = true;
  
  while(!ck)
  {
    meeting();
    
    if (!ck)
    {
      melting();
      
      q = nq;
      sq = snq;

      while (!nq.empty())
        nq.pop();

      while (!snq.empty())
        snq.pop();
      
      ans++;
    }
  }
  
  cout << ans;
}