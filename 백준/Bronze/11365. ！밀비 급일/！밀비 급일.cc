#include <bits/stdc++.h>
using namespace std;

string s, k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (1)
  {
    getline(cin, s);
    
    if (s == "END")
      break;
    
    reverse(s.begin(), s.end());
    
    cout << s << "\n";
  }
}