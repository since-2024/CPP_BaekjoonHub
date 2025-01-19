#include <bits/stdc++.h>
using namespace std;

#define MAX 27

int n;
char x, y;
string is;
vector<int> graph[MAX];
bool visited[MAX];

void dfs(int idx)
{
  visited[idx] = true;

  for (auto c : graph[idx])
  {
    if (!visited[c])
      dfs(c);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  for (int i=0; i<n; i++)
  {
    cin >> x >> is >> y;

    graph[x-'a'].push_back(y-'a');
  }

  cin >> n;

  for (int i=0; i<n; i++)
  {
    cin >> x >> is >> y;

    dfs(x-'a');

    if (visited[y-'a'])
      cout << "T\n";
    else
      cout << "F\n";
    
    for (int i=0; i<26; i++)
      visited[i] = false;
  }
}