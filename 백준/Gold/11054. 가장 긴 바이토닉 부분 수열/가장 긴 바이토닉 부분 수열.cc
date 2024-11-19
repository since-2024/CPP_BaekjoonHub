#include <bits/stdc++.h>
using namespace std;

int n, s, ans;
int arr[1001], dpl[1001], dpr[1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  
  for (int i = 1; i <= n; i++)
  {
    dpl[i] = dpr[i] = 1;
    
    for (int j = 1; j <= i; j++)
    {
      if (arr[i] > arr[j])
        dpl[i] = max(dpl[i], dpl[j]+1);
      if (arr[n-i+1] > arr[n-j+1])
        dpr[i] = max(dpr[i], dpr[j]+1);
    }
  }

  for (int i = 1; i <= n; i++)
    ans = max(ans, dpl[i] + dpr[n-i+1] - 1);

  cout << ans;
}