#include<iostream>
using namespace std;

const int MX = 100000;
int dat[MX];
int pos;

void push(int n)
{
    dat[pos++] = n;
}

void pop()
{
    if (pos > 0)
        cout << dat[--pos] << "\n";
    else
        cout << -1 << "\n";
}

void top()
{
   if (pos > 0)
        cout << dat[pos-1] << "\n";
   else
       cout << -1 << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t;
    string cmd;
    
    cin >> n;
    
    while(n--)
    {
        string cmd;
        cin >> cmd;
        
        if (cmd == "push")
        {
            cin >> t;
            push(t);
        }
        else if ( cmd == "pop")
        {
            pop();
        }
        else if ( cmd == "size")
        {
            cout << pos << "\n";
        }
        else if ( cmd == "empty")
        {
            cout << (pos == 0) << "\n";
        }
        else if ( cmd == "top")
        {
            top();
        }
    }
}