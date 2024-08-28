#include<iostream>
using namespace std;

const int MX = 1000007;
int dat[MX*2];
int head =  MX, tail = MX;

void push_back(int n)
{
    dat[tail++] = n;
}

void push_front(int n)
{
    dat[--head] = n;
}

void pop_front()
{
    if (head != tail)
        cout << dat[head++] << "\n";
    else
        cout << -1 << "\n";
}

void pop_back()
{
    if (head != tail)
        cout << dat[--tail] << "\n";
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
        
        if (cmd == "push_back")
        {
            cin >> t;
            push_back(t);
        }
        else if (cmd == "push_front")
        {
            cin >> t;
            push_front(t);
        }
        else if ( cmd == "pop_front")
        {
            pop_front();
        }
        else if ( cmd == "pop_back")
        {
            pop_back();
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