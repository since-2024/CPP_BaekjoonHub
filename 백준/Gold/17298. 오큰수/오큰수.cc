#include <bits/stdc++.h>
using namespace std;

int n, k, t;
int li[1000001];
stack<int> stk;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 0; i < n; i++)
    cin >> li[i];
  
  for (int i = n-1; i >= 0; i--)
  {
    t = li[i];
    while (!stk.empty() && t >= stk.top())
      stk.pop();
    
    if (stk.empty())
      li[i] = -1;
    else
      li[i] = stk.top();
    
    stk.push(t);
  }
  
  for (int i = 0; i < n; i++)
    cout << li[i] << " ";
}