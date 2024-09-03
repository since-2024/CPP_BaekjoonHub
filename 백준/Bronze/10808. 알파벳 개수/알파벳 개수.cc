#include <iostream>
using namespace std;

string s;
int arr[26];
char c;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        c = s[i];
        arr[int(c) - 97]++;
    }
    
    for(int d: arr)
    {
        cout << d << " ";
    }
}