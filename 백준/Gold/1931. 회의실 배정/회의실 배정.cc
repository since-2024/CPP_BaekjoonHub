#include <bits/stdc++.h>
using namespace std;

int n, s, e, idx, ans;
vector<pair<int,int>> sc;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> s >> e;
    sc.push_back(make_pair(e,s));
  }
  
  sort(sc.begin(), sc.end());
  
  idx = sc[0].first;
  ans = 1;
  
  for (int i=1; i < n; i++)
  {
    if (idx <=sc[i].second)
    {
      idx = sc[i].first;
      ans++;
    }
  }
  
  cout << ans;
}