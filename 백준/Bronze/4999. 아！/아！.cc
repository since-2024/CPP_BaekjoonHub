#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s1 >> s2;
  
  if (s1.size() >= s2.size())
    cout << "go";
  else
    cout << "no";
  
}