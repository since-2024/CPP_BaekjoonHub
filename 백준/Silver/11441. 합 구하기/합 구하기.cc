#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, m, i, j;
int a[MAX], sum[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int k=1; k<=n; k++)
  {
    cin >> a[k];
    
    sum[k] = sum[k-1] + a[k];
  }
  
  cin >> m;
  
  while (m--)
  {
    cin >> i >> j;
    
    cout << sum[j] - sum[i-1] << "\n";
  }
}