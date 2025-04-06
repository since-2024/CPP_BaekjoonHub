#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

int n, t, s, b;
int a[MAX];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;

  while(t--)
  {
    cin >> n;

    for (int i=0; i<n; i++)
      cin >> a[i];

    s = *min_element(a, a+n);
    b = *max_element(a, a+n);
    
    cout << s << " " << b << "\n";
  }
}