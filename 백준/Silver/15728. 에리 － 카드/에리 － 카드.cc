#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int n, k, ans, pos;
int a1[MAX], a2[MAX];
bool v[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  
  for (int i=0; i < n; i++)
    cin >> a1[i];
  
  for (int i=0; i < n; i++)
    cin >> a2[i];

  for (int m=0; m<=k; m++)
  {
    ans = -1e9, pos = -1;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (v[j])
          continue;
        
        if (a1[i] * a2[j] > ans)
        {
          ans = a1[i] * a2[j];
          pos = j;
        }
      }
    }
    v[pos] = 1;
  }

  cout << ans;
}