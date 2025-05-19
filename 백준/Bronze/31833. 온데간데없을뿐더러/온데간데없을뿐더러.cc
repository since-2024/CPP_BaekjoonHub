#include <bits/stdc++.h>
using namespace std;

int n, k, l;
string s1, s2;
bool ans_is_x;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> k;
    s1 += to_string(k);
  }
  
  for (int i=0; i<n; i++)
  {
    cin >> k;
    s2 += to_string(k);
  }
  
  long long x = stoll(s1);
  long long y = stoll(s2);
  
  if (x < y)
    cout << s1;
  else
    cout << s2;
}