#include <bits/stdc++.h>
using namespace std;

string a[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

int t;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;

  t = s[0]-'0';
  cout << stoi(a[t]);

  for (int i=1; i < s.length(); i++)
  {
    t = s[i]-'0';

    cout << a[t];
  }
}