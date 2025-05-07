#include <bits/stdc++.h>
using namespace std;

char k[5] = {'K','O','R','E','A'};

int i;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  for (auto c : s)
  {
    if (c == k[i%5])
      i++;
  }
  
  cout << i;
}