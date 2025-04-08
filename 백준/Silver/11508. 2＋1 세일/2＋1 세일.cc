#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int n, a, sum, ans;
vector<int> v;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> a;
    v.push_back(a);
  }
  
  sort(v.rbegin(), v.rend());
  
  for (int i=0; i<n; i++)
  {
    if ((i+1) % 3 == 0)
      continue;
    
    ans += v[i];
  }
  
  cout << ans;
}