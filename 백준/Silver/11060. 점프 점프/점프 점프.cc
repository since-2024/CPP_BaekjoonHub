#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int n;
int graph[MAX], v[MAX];
queue<int> q;


void bfs()
{
  while (!q.empty())
  {
    int p = q.front();
    int k = graph[p];
    q.pop();
    
    for (int i=1; i <= k; i++)
    {
      if (MAX <= p+i || 0 < v[p+i])
        continue;
      
      v[p+i] = v[p] + 1;
      
      q.push(p+i);
    }
  }
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i < n; i++)
    cin >> graph[i];
  
  q.push(0);
  v[0] = 1;
  
  bfs();
  
  cout << v[n-1]-1;
}