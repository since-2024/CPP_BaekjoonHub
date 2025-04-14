#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  while (n--)
  {
    cin >> s;
    
    if (6 <= s.length() && s.length() <= 9)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}