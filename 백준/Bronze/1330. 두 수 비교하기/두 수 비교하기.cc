#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a, b;
    string ans;
    
    cin >> a >> b;
    
    if (a > b)
        ans = ">";
    else if (a < b)
        ans = "<";
    else
        ans = "==";
    
    cout << ans;
    
    return 0;
}