#include <iostream>
#include <deque>
using namespace std;

int n, t, k;
deque<int> q;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--)
    {
        cin >> t;

        switch (t)
        {
        case 1:
            cin >> k;
            q.push_front(k);
            break;
        case 2:
            cin >> k;
            q.push_back(k);
            break;
        case 3:
            if (!q.empty())
            {
                k = q.front();
                q.pop_front();
            }
            else
                k = -1;

            cout << k << "\n";
            break;
        case 4:
            if (!q.empty())
            {
                k = q.back();
                q.pop_back();
            }
            else
                k = -1;

            cout << k << "\n";
            break;
        case 5:
            cout << q.size() << "\n";
            break;
        case 6:
            cout << (q.empty()) << "\n";
            break;
        case 7:
            if (!q.empty())
                k = q.front();
            else
                k = -1;

            cout << k << "\n";
            break;
        case 8:
            if (!q.empty())
                k = q.back();
            else
                k = -1;

            cout << k << "\n";
            break;
        }
    }
}