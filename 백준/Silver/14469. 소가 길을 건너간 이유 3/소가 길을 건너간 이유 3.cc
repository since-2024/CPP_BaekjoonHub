#include <bits/stdc++.h>
using namespace std;

int n, a, b, ans;
vector<pair<int,int>> v;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> a >> b;
    v.push_back(make_pair(a,b));
  }
  
  sort(v.begin(), v.end());
  
  for (auto c: v)
  {
    a = c.first;
    b = c.second;
    
    if (ans < a)
      ans = a;
    
    ans += b;
  }
  
  cout << ans;
}