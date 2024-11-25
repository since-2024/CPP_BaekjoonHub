#include <bits/stdc++.h>
using namespace std;

int n, a, b;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  for (int i = 1; i <= n; i++)
  {
    cin >> a >> b;
    
    cout << "Case #" << i << ": ";
    cout << a << " + " << b << " = ";
    cout << a + b << "\n";
  }
  
}