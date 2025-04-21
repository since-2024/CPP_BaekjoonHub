#include <bits/stdc++.h>
using namespace std;

int n, a, b;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  n = s.length();
  
  for (int i=0; i<n/2; i++)
    a += s[i] -'0';
  
  for (int i=n/2; i<n; i++)
    b += s[i] -'0';
  
  if (a == b)
    cout << "LUCKY";
  else
    cout << "READY";
}