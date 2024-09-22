#include <bits/stdc++.h>
using namespace std;

int n, t, k;
char c;
deque<int> q;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  while (t--)
  {
     cin >> n >> c;
     k = c - 'A';
     q.push_back(k);
     
     while (--n)
     {
       cin >> c;
       k = c - 'A';
       
       if (k <= q.front())
         q.push_front(k);
       else
         q.push_back(k);
     }
     
     while (!q.empty())
     {
       k = q.front();
       
       cout << char(k + 'A');
       
       q.pop_front();
     }
     cout << "\n";
  }
}