#include<iostream>
using namespace std;

const int MX = 1000007;
int dat[MX];
int head, tail;

void push(int n)
{
    dat[tail++] = n;
}

void pop()
{
    if (head != tail)
        cout << dat[head++] << "\n";
    else
        cout << -1 << "\n";
}

void front()
{
   if (head != tail)
        cout << dat[head] << "\n";
   else
       cout << -1 << "\n";
}

void back()
{
   if (head != tail)
        cout << dat[tail-1] << "\n";
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
            cout << (tail - head) << "\n";
        }
        else if ( cmd == "empty")
        {
            cout << (head == tail) << "\n";
        }
        else if ( cmd == "front")
        {
            front();
        }
        else if ( cmd == "back")
        {
            back();
        }
    }
}