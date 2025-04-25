#include <bits/stdc++.h>
using namespace std;

string a, b, ans;
int sum;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> a >> b;
  
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  
  sum = stoi(a) + stoi(b);
  
  ans = to_string(sum);
  reverse(ans.begin(), ans.end());
  
  cout << stoi(ans);
}