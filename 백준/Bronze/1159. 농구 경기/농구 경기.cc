#include <bits/stdc++.h>
using namespace std;

#define MAX 26

int n;
int a[MAX];
string s, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  while (n--)
  {
    cin >> s;
    
    a[s[0]-'a']++;
  }

  for (int i=0; i<MAX; i++)
  {
    if (a[i] >= 5)
      ans += 'a' + i;
  }

  if (ans == "")
    ans = "PREDAJA";

  cout << ans;
}