#include <bits/stdc++.h>
using namespace std;

string a, b;
bool check[26];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> a >> b;
  
  for (auto c : a)
    check[c-'a'] = 1;
  
  for (auto c : b)
    if (check[c-'a'] == 0)
      cout << c;
}