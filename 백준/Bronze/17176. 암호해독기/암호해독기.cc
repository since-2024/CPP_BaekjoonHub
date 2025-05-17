#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[53];
string s;
bool succ=true;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> k;
    
    a[k]++;
  }
  
  cin.ignore();
  getline(cin, s);
  
  for (auto c : s)
  {
    if (c == ' ')
      k = 0;
    else if (c <= 'Z')
      k = c - 'A' + 1;
    else
      k = c - 'a' + 1 + 26;
    
    a[k]--;
  }
  
  for (auto c : a)
  {
    if (c != 0)
    {
      succ = false;
      break;
    }
  }
  
  if (succ)
    cout << "y";
  else
    cout << "n";
}