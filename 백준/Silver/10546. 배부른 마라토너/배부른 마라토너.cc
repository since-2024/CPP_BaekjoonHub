#include <bits/stdc++.h>
using namespace std;

int n;
string name;
unordered_map<string, int> runner;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> name;
    runner[name]++;
  }
  
  for (int i = 0; i < n-1; i++)
  {
    cin >> name;
    runner[name]--;
  }

  for (auto c : runner)
  {
    if (c.second == 1)
    {
      cout << c.first;
      break;
    }
  }
}