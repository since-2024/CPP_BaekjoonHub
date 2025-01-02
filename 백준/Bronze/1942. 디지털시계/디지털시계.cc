#include <bits/stdc++.h>
using namespace std;

int cnt=3, t1, t2;
string s1, s2, sb;
vector<int> v1, v2;


bool check()
{
  int made = v1[0] * 10000 + v1[1] * 100 + v1[2];

  return (made % 3 == 0);
}

void count_up()
{
  v1[2]++;

  if (v1[2] == 60)
  {
    v1[2] = 0;
    v1[1]++;

    if (v1[1] == 60)
    {
      v1[1] = 0;
      v1[0]++;

      if (v1[0] == 24)
      {
        v1[0] = 0;
      }

    }

  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (cnt--)
  {
    int ans = 0;

    cin >> s1 >> s2;

    istringstream ss1(s1);
    while (getline(ss1, sb, ':'))
      v1.push_back(stoi(sb));
    
    istringstream ss2(s2);
    while (getline(ss2, sb, ':'))
      v2.push_back(stoi(sb));

    t2 = v2[0] * 3600 + v2[1] * 60 + v2[2];

    while (1)
    {
      t1 = v1[0] * 3600 + v1[1] * 60 + v1[2];

      if (check())
        ans++;
      
      if (t1 == t2)
        break;
      
      count_up();
    }

    cout << ans << "\n";

    while (v1.size())
    {
      v1.pop_back();
      v2.pop_back();
    }
  }
}
