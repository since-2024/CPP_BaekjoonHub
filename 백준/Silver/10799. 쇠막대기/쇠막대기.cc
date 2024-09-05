#include <iostream>
#include <stack>
using namespace std;

string s;
int ans, cnt;
stack<int> stk;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    getline(cin, s);

    for (auto c: s)
    {
        if (c == '(')
        {
            stk.push(c);
            cnt = 0;
        }
        else
        {
            stk.pop();
            if (cnt == 0)
            {
                cnt = stk.size();
                ans += cnt;
            }
            else
            {
                cnt--;
                ans++;
            }
        }
    }
    
    cout << ans;
}