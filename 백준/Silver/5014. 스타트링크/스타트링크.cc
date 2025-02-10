#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001

int f, s, g, u, d, ans;
queue<int> q;
int visited[MAX];


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> f >> s >> g >> u >> d;

  q.push(s);
  visited[s] = 1;

  while(!q.empty())
  {
    int k = q.front();
    q.pop();

    if (k == g)
      break;

    if (k+u <= f && visited[k+u] == 0)
    {
      q.push(k+u);
      visited[k+u] = visited[k] + 1;
    }
    
    if (0 < k-d && visited[k-d] == 0)
    {
      q.push(k-d);
      visited[k-d] = visited[k] + 1;
    }
  }

  if (visited[g] > 0)
    cout << visited[g] - 1;
  else
    cout << "use the stairs";
}
