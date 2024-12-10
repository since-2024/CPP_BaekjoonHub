#include <bits/stdc++.h>
using namespace std;

int k;
int arr[31];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for (int i = 0; i < 28; i++)
  {
    cin >> k;
    
    arr[k] = 1;
  }
  
  for (int i = 1; i <= 30; i++)
    if (arr[i] == 0)
      cout << i << "\n";
}