#include <iostream>
#include <deque>
using namespace std;

deque<int> Q;
int n;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    for (int i = 1; i <= n; i++)
        Q.push_back(i);
    
    while (Q.size() > 1)
    {
        Q.pop_front();
        
        Q.push_back( Q.front() );
        
        Q.pop_front();
    }
    
    cout << Q.front();
}