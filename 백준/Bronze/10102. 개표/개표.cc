#include <bits/stdc++.h>
using namespace std;

int n, a, b;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  
  for (auto c : s)
  {
    if (c == 'A')
      a++;
    else
      b++;
  }
  
  if (a > b)
    cout << "A";
  else if (a < b)
    cout << "B";
  else
    cout << "Tie";
}