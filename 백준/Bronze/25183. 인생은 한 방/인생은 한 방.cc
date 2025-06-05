#include <bits/stdc++.h>
using namespace std;

int n, cnt, k, c;
string s;
bool succ;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> s;
  
  k = s[0]-'A';
  
  for (int i=1; i<n; i++)
  {
    c = s[i]-'A';
    
    if ((k-c == 1) || (c-k == 1))
      cnt++;
    else
      cnt = 0;
    
    k = c;
    
    if (cnt == 4)
    {
      succ = true;
      break;
    }
  }
  
  if (succ)
    cout << "YES";
  else
    cout << "NO";
}