#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int cnt, a1[26], a2[26];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (!cin.eof())
  {
    fill(a1, a1+26, 0);
    fill(a2, a2+26, 0);
    
    getline(cin, s1);
    getline(cin, s2);
    
    for (char c: s1)
      a1[c-'a']++;
    
    for (char c: s2)
      a2[c-'a']++;
    
    for (int i=0; i<26; i++)
    {
      cnt = min(a1[i], a2[i]);
      
      while (cnt--)
        cout << char('a' + i);
    }
    cout << "\n";
  }
}