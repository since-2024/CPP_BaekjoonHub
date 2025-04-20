#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  while (n--)
  {
    cin >> s;
    
    k = s[s.length()-1] - '0';
    
    if (k%2 == 0)
      cout << "even\n";
    else
      cout << "odd\n";
  }
}