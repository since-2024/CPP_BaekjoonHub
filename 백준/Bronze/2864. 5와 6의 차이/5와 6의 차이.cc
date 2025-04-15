#include <bits/stdc++.h>
using namespace std;

string a, b, ta, tb;
int k, l;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> a >> b;
  
  for (auto c: a)
  {
    if (c == '6')
      ta += "5";
    else
      ta += c;
  }
  
  for (auto c: b)
  {
    if (c == '6')
      tb += "5";
    else
      tb += c;
  }
  
  cout << stoi(ta) + stoi(tb) << " ";
  
  ta = "";
  tb = "";
  
  for (auto c: a)
  {
    if (c == '5')
      ta += "6";
    else
      ta += c;
  }
  
  for (auto c: b)
  {
    if (c == '5')
      tb += "6";
    else
      tb += c;
  }
  
  cout << stoi(ta) + stoi(tb);
}