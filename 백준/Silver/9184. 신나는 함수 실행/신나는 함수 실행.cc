#include <bits/stdc++.h>
using namespace std;

int x, y, z;

int dp[21][21][21];

int W(int a, int b, int c)
{
  if (a <= 0 || b <= 0 || c <= 0)
    return 1;
  
  else if (a > 20 or b > 20 or c > 20)
    return W(20, 20, 20);

  else if (dp[a][b][c] != 0) { }  // pass
  
  else if (a < b && b < c)
    dp[a][b][c] = W(a, b, c-1) + W(a, b-1, c-1) - W(a, b-1, c);

  else
    dp[a][b][c] = W(a-1, b, c) + W(a-1, b-1, c) + W(a-1, b, c-1) - W(a-1, b-1, c-1);

  return dp[a][b][c];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (1)
  {
    cin >> x >> y >> z;

    if (x == -1 && y == -1 && z == -1)
      break;
    
    int ans =  W(x, y, z);
    
    cout << "w(" << x << ", " << y << ", " << z << ") = " << ans << "\n";
  }
}