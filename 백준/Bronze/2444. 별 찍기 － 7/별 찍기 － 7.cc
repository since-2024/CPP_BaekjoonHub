#include <bits/stdc++.h>
using namespace std;

int n;

void print_star_line(int i)
{
  for (int j = n - i; j > 0; j--)
    cout << " ";

  for (int j = 1; j <= 2*i - 1; j++)
    cout << "*";

  cout << "\n";
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 1; i <= n; i++)
    print_star_line(i);
  
  for (int i = n-1; i > 0; i--)
    print_star_line(i);
}