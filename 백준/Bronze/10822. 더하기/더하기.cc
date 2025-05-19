#include <bits/stdc++.h>
using namespace std;

int ans;
string s;
vector<string> v;


vector<string> split(string str, char Delimiter) {
  istringstream iss(str);
  string buffer;
  
  vector<string> result;
  
  while (getline(iss, buffer, Delimiter))
    result.push_back(buffer);
  
  return result;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;
  
  v = split(s, ',');
  
  for (auto x : v)
    ans += stoi(x);
  
  cout << ans;
}