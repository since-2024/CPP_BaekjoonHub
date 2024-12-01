#include <bits/stdc++.h>
using namespace std;

string s, buff;
int ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  getline(cin, s);
  
  istringstream ss(s);
  
  while (getline(ss, buff, ' '))
    if (buff.length() != 0)
      ans++;
  
  cout << ans;
}