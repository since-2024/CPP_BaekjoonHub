#include <bits/stdc++.h>
using namespace std;

#define ll long long

int c, ans=-1;
queue<pair<ll,ll>> q;
ll a, b, k, t;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> a >> b;
  
  q.push(make_pair(a,1));
  
  while(!q.empty())
  {
    k = q.front().first;
    c = q.front().second;
    q.pop();
    
    if (k == b)
    {
      ans = c;
      break;
    }
    
    t = k*2;
    if (t <= b)
      q.push(make_pair(t, c+1));
    
    t = k*10 + 1;
    if (t <= b)
      q.push(make_pair(t, c+1));
  }
  
  cout << ans;
}