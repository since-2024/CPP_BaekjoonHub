#include <iostream>
#include <deque>
using namespace std;

int n, t;
int kind[100001];
deque<int> q;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        kind[i] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t;

        if (kind[i] == 0)
            q.push_back(t);
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        q.push_front(t);
        cout << q.back() << " ";
        q.pop_back();
    }
}