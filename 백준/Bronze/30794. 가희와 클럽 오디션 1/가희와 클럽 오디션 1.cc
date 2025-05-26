#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  
  if (s == "miss")
    k = 0;
  else if (s == "bad")
    k = 200;
  else if (s == "cool")
    k = 400;
  else if (s == "great")
    k = 600;
  else if (s == "perfect")
    k = 1000;
  
  cout << n * k;
}