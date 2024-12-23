#include <bits/stdc++.h>
using namespace std;

int n, x, y, ans;
int bg[100][100];


void set_paper(int a, int b)
{
  for (int i = a; i < a+10; i++)
  {
    for (int j = b; j < b+10; j++)
    {
      if (!bg[i][j])
      {
        bg[i][j] = 1;
        ans++;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  while (n--)
  {
    cin >> x >> y;

    set_paper(x, y);
  }

  cout << ans;
}