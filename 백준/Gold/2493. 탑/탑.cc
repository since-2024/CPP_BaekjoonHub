#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;


int n, k, t;
vector<pair<int, int>> v;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
    
  for (int i = 1; i <= n; i++)
  {
    t = 0;
    cin >> k;
    
    while (!v.empty() && k > v.back().se)
      v.pop_back();
    
    if (!v.empty())
      t = v.back().fi;
    
    cout << t << " ";
    
    v.emplace_back(i, k);
  }
}