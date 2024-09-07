#include <iostream>
#include <stack>
using namespace std;

stack<int> stk;
int n, t, ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    while (n--)
    {
        cin >> t;
        
        if (t != 0)
            stk.push(t);
        else
            stk.pop();
    }
    
    while (!stk.empty())
    {
        t = stk.top();
        stk.pop();
        ans += t;
    }
    
    cout << ans;
}