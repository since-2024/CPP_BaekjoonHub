#include <iostream>
#include <stack>
using namespace std;

string s;
int arr[26];
char c;
stack<int> stk;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        getline(cin, s);
        
        if (s.length() == 1 && s == ".")
            break;
        
        while( !stk.empty() ) 
            stk.pop();
        
        for (auto c : s)
        {
            if (c == '(' || c == '[')
            {
                stk.push(c);
            }
            else if (c == ')')
            {
                if (!stk.empty() && stk.top() == '(')
                    stk.pop();
                else
                {
                    stk.push(0);
                    break;
                }
            }
            else if (c == ']')
            {
                if (!stk.empty() && stk.top() == '[')
                    stk.pop();
                else
                {
                    stk.push(0);
                    break;
                }
            }
        }
        
        if (stk.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }
}