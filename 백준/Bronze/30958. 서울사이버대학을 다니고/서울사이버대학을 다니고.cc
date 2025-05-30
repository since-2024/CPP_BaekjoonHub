#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int a[26];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  cin.ignore();
  getline(cin, s);
  
  for (auto c: s)
  {
    if ('a' <= c && c <= 'z')
      a[c-'a']++;
  }
  
  cout << *max_element(a, a+26);
}