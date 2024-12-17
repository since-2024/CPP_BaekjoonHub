#include <bits/stdc++.h>
using namespace std;

int idx;
string s;
vector<string> crt = {"c=","c-","dz=","d-","lj","nj","s=","z="};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  for(int i = 0; i < crt.size(); i++)
  {
    while(1){
      idx = s.find(crt[i]);
      
      if(idx == string::npos)
        break;
      
      s.replace(idx, crt[i].length(), "#");
    }
  }
  
  cout << s.length();
}