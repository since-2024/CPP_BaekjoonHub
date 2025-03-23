#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i=0; i<8; i++)
  {
    cin >> s;

    for (int j=0; j<8; j++)
      if ((i+j)%2 == 0 && s[j] == 'F')
        ans++;
  }

  cout << ans;
}