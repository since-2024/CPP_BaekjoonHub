#include <bits/stdc++.h>
using namespace std;

char bs[10] = {'B','R','O','N','Z','E','S','I','L','V'};

int n;
string s;
int a[26], b[10];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  
  for (auto c : s)
    a[c-'A']++;
  
  a['R'-'A'] /= 2;
  a['E'-'A'] /= 2;
  
  for (int i=0; i<10; i++)
    b[i] = a[bs[i]-'A'];
  
  cout << *min_element(b, b+10);
}