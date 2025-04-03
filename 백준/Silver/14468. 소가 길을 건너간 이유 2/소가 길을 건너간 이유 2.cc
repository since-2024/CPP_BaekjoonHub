#include <bits/stdc++.h>
using namespace std;

#define MAX 11

int t, ans;
char c;
vector<pair<int,int>> v(26);

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i=0; i<52; i++)
  {
    cin >> c;
    
    t = c -'A';
    if (v[t].first == 0)
      v[t].first = i+1;
    else
      v[t].second = i+1;
  }
  
  for (int i=0; i<26; i++)
  {
    for (int j=0; j<26; j++)
    {
      if (v[i].first < v[j].first
          && v[j].first < v[i].second
          && v[i].second < v[j].second)
      {
        ans++;
      }
    }
  }
  
  cout << ans;
}