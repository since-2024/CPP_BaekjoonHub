#include <bits/stdc++.h>
using namespace std;

int n;
int a[26];
char s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  while(n--)
  {
    cin >> s;
    
    a[s-'A']++;
  }
  
  cin >> s;
  
  cout << a[s-'A'];
}