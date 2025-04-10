#include <bits/stdc++.h>
using namespace std;

string s, t;

bool check(vector<string> v, string k)
{
  bool ret = true;
  
  for (auto c : v)
  {
    if (c == k)
    {
      ret = false;
      break;
    }
  }
  
  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (1)
  {
    cin >> s;
    
    bool succ = true;
    int n = s.length();
    
    if (s == "*")
      break;
    
    for (int i=1; i<n; i++)
    {
      vector<string> v;
      
      for (int j=0; j<n-i; j++)
      {
        t = to_string(s[j]) + to_string(s[j+i]);
        
        if (check(v, t))
        {
          v.push_back(t);
        }
        else
        {
          succ = false;
          break;
        }
      }
      
      if (!succ)
        break;
    }
    
    if (succ == true)
      cout << s << " is surprising.\n";
    else
      cout << s << " is NOT surprising.\n";
  }
}