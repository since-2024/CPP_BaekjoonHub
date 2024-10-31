#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int graph[1010][1010];
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i = 1; i <= n; i++)
  {
    cin >> s;
    
    for (int j = 0; j < s.length(); j++)
      graph[i][j+1] = s[j] - '0';
  }
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (graph[i][j] != 0)
      {
        graph[i][j] = min(graph[i-1][j-1], min(graph[i-1][j], graph[i][j-1])) + 1;
        k = max(k, graph[i][j]);
      }
    }
  }
  
  cout << k * k;
}