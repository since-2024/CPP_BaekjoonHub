#include <bits/stdc++.h>
using namespace std;

#define MAX 10

int n, h, w;
string ans;
string s[MAX];

char find_c(int idx)
{
  for (int i=0; i<h; i++)
  {
    for (int j=idx*w; j<(idx+1)*w; j++)
    {
      if (s[i][j] != '?')
        return s[i][j];
    }
  }

  return '?';
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> h >> w;

  for (int i=0; i<h; i++)
    cin >> s[i];

  for (int i=0; i<n; i++)
    ans += find_c(i);
  
  cout << ans;
}