
#include <iostream>
using namespace std;

string cmd, arr;
int siz = 0;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  bool rev = false;
  int t, idx, head, tail;
  string tmp;
  char c;

  cin >> t;

  while (t--)
  {
    cin >> cmd;
    cin >> siz;
    cin >> arr;

    rev = false;
    int dat[siz];
    head = 0;
    tail = siz - 1;
    idx = 0;

    for (int i = 1; i <= arr.length(); i++)
    {
      if (isdigit(arr[i]))
      {
        tmp += arr[i];
      }
      else
      {
        if (!tmp.empty())
        {
          dat[idx++] = stoi(tmp);
          tmp.clear();
        }
      }
    }

    for (int i = 0; i < cmd.length(); i++)
    {
      c = cmd[i]; 
      if (c == 'R')
      {
        rev ^= true;
      }
      else
      {
        if (rev)
        {
          tail--;
        }
        else
        {
          head++;
        }
      }
    }

    if (tail + 1 < head)
    {
      cout << "error" << "\n";
    }
    else
    {
      cout << "[";

      if (!rev)
      {
        for (int i = head; i <= tail; i++)
        {
          cout << dat[i];

          if (i != tail)
          {
            cout << ",";
          }
        }
      }
      else
      {
        for (int i = tail; head <= i; i--)
        {
          cout << dat[i];

          if (i != head)
          {
            cout << ",";
          }
        }
      }

      cout << "]\n";
    }
  }
}