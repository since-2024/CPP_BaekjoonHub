#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  getline(cin, s);
  
  for (auto c: s)
  {
    if ('a' <= c && c <= 'z')
      a[c-'a']++;
    else if ('A' <= c && c <= 'Z')
      a[c-'A']++;
  }
  
  for (int i=0; i<26; i++)
  {
    cout << char('A'+i) << " | ";
    
    for (int j=0; j<a[i]; j++)
      cout << "*";
    
    cout << "\n";
  }
}