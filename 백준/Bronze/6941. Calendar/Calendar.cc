#include <bits/stdc++.h>
using namespace std;

int n, d;
string dow = "Sun Mon Tue Wed Thr Fri Sat\n";

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> d >> n;

  cout << dow;

  for (int i=1; i<d; i++)
    cout << "    ";
  
  for (int i=1; i<=n; i++)
  {
    if (i < 10)
      cout << "  " << i;
    else
      cout << " " << i;
    
    if (d % 7 == 0)
      cout << "\n";
    else
      cout << " ";
    
      d++;
  }
}