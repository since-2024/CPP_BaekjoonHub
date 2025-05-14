#include <bits/stdc++.h>
using namespace std;

int n;
string s;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  n = s.length();
  
  for (int i=0; i<n/2; i++)
    cout << s[i];
  
  cout << " ";
  
  for (int i=n/2; i<n; i++)
    cout << s[i];
}