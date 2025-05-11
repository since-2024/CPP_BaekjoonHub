#include <bits/stdc++.h>
using namespace std;

char g[10][20];

int n, k;
char c;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  fill(g[0], g[10], '.');
  
  while (n--)
  {
    cin >> c >> k;
    
    g[c-'A'][k-1] = 'o';
  }
  
  for (int i=0; i<10; i++)
  {
    for (int j=0; j<20; j++)
      cout << g[i][j];
    cout << "\n";
  }
}