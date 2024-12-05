#include <bits/stdc++.h>
using namespace std;

int n, v;
int arr[201];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  while (n--)
  {
    cin >> v;
    arr[v+100]++;
  }
  
  cin >> v;
  
  cout << arr[v+100];
}