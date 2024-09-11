#include <iostream>
using namespace std;

int n, t, k, idx;
int s[1000001];


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
            s[idx++] = k;
            break;
        case 2:
            if (idx > 0)
                k = s[--idx];
            else
                k = -1;

            cout << k << "\n";
            break;
        case 3:
            cout << idx << "\n";
            break;
        case 4:
            cout << (idx == 0) << "\n";
            break;
        case 5:
            if (idx > 0)
                k = s[idx-1];
            else
                k = -1;

            cout << k << "\n";
            break;
        }
    }
}