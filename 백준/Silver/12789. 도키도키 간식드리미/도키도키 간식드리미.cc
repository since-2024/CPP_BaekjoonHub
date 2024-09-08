#include <iostream>
using namespace std;

int n, idx, k, target = 1;
int stk[1001];


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  while (n--)
  {
    cin >> k;

    if (k == target)
    {
      target++;
      
      while (idx > 0 && stk[idx - 1] == target)
      {
        target++;
        idx--;
      }
    }
    else
    {
      stk[idx++] = k;
    }
  }

  if (idx == 0)
  {
    cout << "Nice";
  }
  else
  {
    cout << "Sad";
  }
}