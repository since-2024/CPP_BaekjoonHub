#include <bits/stdc++.h>
using namespace std;

string s;
int al[26];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  memset(al, -1, sizeof(al));
  
  cin >> s;
  
  for (int i = 0; i < s.length(); i++)
  {
    if (al[s[i] - 'a'] == -1)
      al[s[i] - 'a'] = i;
  }
  
  for (auto c : al)
    cout << c << " ";
}