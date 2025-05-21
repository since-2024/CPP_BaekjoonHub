#include <bits/stdc++.h>
using namespace std;

int n, k;
string s="WelcomeToSMUPC";


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  k = (n-1) % s.length();
  
  cout << s[k];
}