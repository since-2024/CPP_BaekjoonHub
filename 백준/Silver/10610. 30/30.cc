#include <bits/stdc++.h>
using namespace std;

string n;
int k;
vector<int> ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i < n.size(); i++)
  {
    ans.push_back(n[i] - '0');
    k += ans[i];
  }

  sort(ans.rbegin(), ans.rend());

  if (k % 3 == 0 && ans[n.size()-1] == 0)
    for (auto c: ans)
      cout << c;
  else
    cout << -1;
  
}