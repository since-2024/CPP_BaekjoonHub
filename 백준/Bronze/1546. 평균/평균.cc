#include <bits/stdc++.h>
using namespace std;

int n, m;
double s, ans;
double arr[1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    s += arr[i];
  }
  
  m = *max_element(arr, arr + n);
  ans = s / n / m * 100;
  
  cout << ans;
}