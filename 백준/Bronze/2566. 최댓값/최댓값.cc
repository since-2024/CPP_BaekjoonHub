#include <bits/stdc++.h>
using namespace std;

int m, x=1, y =1, k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for (int i=1; i<=9; i++)
  {
    for (int j=1; j<=9; j++)
    {
      cin >> k;
      
      if (m < k)
      {
        m = k;
        x = i;
        y = j;
      }
    }
  }
  
  cout << m << "\n";
  cout << x << " " << y;
}