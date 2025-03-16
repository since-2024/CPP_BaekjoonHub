#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9

int k, a, b;
vector<int> ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> k;

  k++;

  while (k > 1)
  {
    if (k % 2 == 0)
      ans.push_back(4);
    else
    {
      ans.push_back(7);
      k--;
    }
    k /= 2;
  }

  reverse(ans.begin(), ans.end());

  for (auto c : ans)
    cout << c;
}

