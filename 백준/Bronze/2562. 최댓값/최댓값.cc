#include <bits/stdc++.h>
using namespace std;

int n, m, k, idx;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for (int i = 1; i <= 9; i++)
  {
    cin >> k;
    
    if (m < k)
    {
      m = k;
      idx = i;
    }
  }
  
  cout << m << "\n" << idx;
}