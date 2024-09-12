#include <iostream>
#include <queue>
using namespace std;

int n, k;
string s;
queue<int> q;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--)
    {
        cin >> s;

        if (s == "push")
        {
            cin >> k;
            q.push(k);
        }
        else if (s == "pop")
        {
            if (!q.empty())
            {
                k = q.front();
                q.pop();
            }
            else
                k = -1;

            cout << k << "\n";
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            cout << (q.empty()) << "\n";
        }
        else if (s == "front")
        {
            if (!q.empty())
                k = q.front();
            else
                k = -1;

            cout << k << "\n";
        }
        else if (s == "back")
        {
            if (!q.empty())
                k = q.back();
            else
                k = -1;

            cout << k << "\n";
        }
    }
}