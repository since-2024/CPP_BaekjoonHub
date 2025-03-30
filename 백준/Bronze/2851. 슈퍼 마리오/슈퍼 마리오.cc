#include <bits/stdc++.h>
using namespace std;

#define MAX 10

int sum, ans, cnt;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i=0; i<MAX; i++)
    cin >> a[i];
  
  for (int i=0; i<MAX; i++)
  {
    if (sum + a[i] < 100)
      sum += a[i];
    else
    {
      if ((100 - sum) >= (sum + a[i] - 100))
        sum += a[i];
      
      break;
    }
  }
  
  cout << sum;
}