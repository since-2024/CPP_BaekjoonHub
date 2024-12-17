#include <bits/stdc++.h>
using namespace std;

int alpha[26], cnt;
char ans;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  
  for (auto c : s)
    alpha[toupper(c)-'A']++;
  
  for (int i = 0; i<26; i++)
  {
    if (cnt < alpha[i])
    {
      cnt = alpha[i];
      ans = 'A' + i;
    }
    else if (cnt == alpha[i])
      ans = '?';
  }
  
  cout << ans;
}