#include <bits/stdc++.h>
using namespace std;

string subject, credit; 
map<string, double> mp;
double ans=0.0, rating, total;

void mp_init()
{
  mp.insert({"A+",	4.5});
  mp.insert({"A0",	4.0});
  mp.insert({"B+",	3.5});
  mp.insert({"B0",	3.0});
  mp.insert({"C+",	2.5});
  mp.insert({"C0",	2.0});
  mp.insert({"D+",	1.5});
  mp.insert({"D0",	1.0});
  mp.insert({"F",	0.0});
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  mp_init();

  for (int i = 0; i < 20; i++)
  {
    cin >> subject >> rating >> credit;

    if (credit != "P")
    {
      ans += rating * mp[credit];
      total += rating;
    }
  }

  cout << ans / total;
}