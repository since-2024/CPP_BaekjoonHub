#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n, k, cnt;
int idx = 0, tail = 1;
int arr[100001];
stack<int> stk;
vector<char> ans;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 1; i <= n; i++)
  {
    stk.push(i);
    ans.push_back('+');

    while (!stk.empty() && stk.top() == arr[cnt])
    {
      stk.pop();
      ans.push_back('-');
      cnt++;
    }
  }

  if (!stk.empty())
  {
    cout << "NO" << '\n';
  }
  else
  {
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << '\n';
    }
  }
}