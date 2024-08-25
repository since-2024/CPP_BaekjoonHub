#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    int len = s.length();

    cout << s[0] << s[len-1] << endl;
  }

  return 0;
}