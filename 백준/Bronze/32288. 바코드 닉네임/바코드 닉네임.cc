#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  
  for (auto c : s)
  {
    if (c == 'l')
      cout << 'L';
    else if (c == 'I')
      cout << 'i';
  }
}