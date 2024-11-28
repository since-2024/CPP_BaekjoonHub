#include <bits/stdc++.h>
using namespace std;

string s;
int num[10];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  for (auto c : s)
    num[c-'0']++;
  
  for (int i = 9; i >= 0; i--)
    for (int j = 0; j < num[i]; j++)
      cout << i;
}