#include <bits/stdc++.h>
using namespace std;

int k, ans;
int arr[42];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for (int i = 0; i < 10; i++)
  {
    cin >> k;
    
    arr[k%42] = 1;
  }
  
  for (auto c : arr)
    ans += c;
  
  cout << ans;
}