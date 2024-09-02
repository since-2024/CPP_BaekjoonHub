#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n;
int idx = 0, tail = 1;
string arr;
char k;
stack<int> stk;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--)
    {
        cin >> arr;
        
        if (arr.length() % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        
        while(!stk.empty())
        {
            stk.pop();
        }
        
        for (int i = 0; i < arr.length(); i++)
        {
            k = arr[i];
            
            if (k == '(')
            {
                stk.push(1);
            }
            else
            {
                if (!stk.empty())
                {
                    stk.pop();
                }
                else
                {
                    stk.push(0);
                    break;
                }
            }
        }
        
        if (stk.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}