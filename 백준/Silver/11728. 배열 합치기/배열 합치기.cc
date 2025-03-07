#include <bits/stdc++.h>
using namespace std;

int n, m, a;
vector<int> ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i=0; i<n+m; i++)
  {
    cin >> a;

    ans.push_back(a);
  }

  sort(ans.begin(), ans.end());

  for (auto c : ans)
    cout << c << " ";
}