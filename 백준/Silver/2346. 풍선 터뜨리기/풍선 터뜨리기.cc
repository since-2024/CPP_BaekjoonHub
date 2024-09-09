#include <iostream>
#include <deque>
using namespace std;

deque<int> Q;
int n, t, k;
int v[1001];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        Q.push_back(i);

    while (Q.size() > 0)
    {
        t = Q.front();
        Q.pop_front();
        
        cout << t << " ";
        
        k = v[t-1];
        
        if (k > 0)
        {
            while (--k)
            {
                Q.push_back( Q.front() );
                Q.pop_front();
            }
        }
        else
        {
            k = -k;
            
            while (k--)
            {
                Q.push_front( Q.back() );
                Q.pop_back();
            }
        }
    }
}