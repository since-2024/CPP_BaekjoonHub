#include <bits/stdc++.h>
using namespace std;

int n;
long long a, b;
string k, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  while (n--)
  {
    cin >> a >> b;
    
    ans = to_string(a * b);
    k="";
    
    while (a && b)
    {
      k = to_string((a%10) * (b%10)) + k;
      a /= 10;
      b /= 10;
    }
    
    while (a)
    {
      k = to_string(a%10) + k;
      a /= 10;
    }
    
    while (b)
    {
      k = to_string(b%10) + k;
      b /= 10;
    }
    
    cout << (ans == k) << "\n";
  }
}