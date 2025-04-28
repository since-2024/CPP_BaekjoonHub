#include <bits/stdc++.h>
using namespace std;

string s;
char k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  for (auto c : s)
  {
    k = int(c) - 3;
    
    if (k < 'A')
      k = int(k) + 26;
    
    cout << k;
  }
}