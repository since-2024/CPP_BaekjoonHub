#include <iostream>
#include <deque>
using namespace std;

deque<int> Q;
int n, t;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> t;

    for (int i = 1; i <= n; i++)
        Q.push_back(i);

    cout << "<";
    
    while (Q.size() > 1)
    {
        for (int i = 1; i < t; i++)
        {
            Q.push_back( Q.front() );
            Q.pop_front();
        }
        
        cout << Q.front() << ", ";
        Q.pop_front();
    }

    cout << Q.front() << ">";
}