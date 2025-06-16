#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool s_find;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  cin.ignore();
  
  while (n--)
  {
    int bg = 0;
    
    getline(cin, s);
    cout << s << " is ";
    
    for (auto c: s)
    {
      if (c == 'G' || c == 'g')
        bg++;
      else if (c == 'B' || c == 'b')
        bg--;
    }
    
    if (bg > 0)
      cout << "GOOD\n";
    else if (bg < 0)
      cout << "A BADDY\n";
    else
      cout << "NEUTRAL\n";
  }
}