#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  cin.ignore();

  for(int i=0; i<n; i++)
  {
    getline(cin, s);

    s[0] = toupper(s[0]);

    cout << s << "\n";
  }
}