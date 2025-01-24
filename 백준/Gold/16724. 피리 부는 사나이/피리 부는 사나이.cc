#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

int n, m, ans;
map<char, pair<int, int>> dir;
char graph[1000][1000];

void dir_init()
{
	dir.insert(make_pair('U', make_pair(-1, 0)));
	dir.insert(make_pair('D', make_pair(1, 0)));
	dir.insert(make_pair('L', make_pair(0, -1)));
	dir.insert(make_pair('R', make_pair(0, 1)));
}

bool dfs(int x, int y)
{
  bool ret;
  char c = graph[x][y];

  if (c == 'S')
    return true;
  else if (c == 'E')
    return false;

  graph[x][y] = 'S';

  ret = dfs(x + dir[c].fi, y + dir[c].se);
  
  graph[x][y] = 'E';

  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  dir_init();

  cin >> n >> m;

  for (int i=0; i < n; i++)
    for (int j=0; j < m; j++)
      cin >> graph[i][j];

  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (dfs(i, j))
        ans++;
    }
  }

  cout << ans;
}