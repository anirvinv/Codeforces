#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string a, b;
    cin >> a >> b;

    if (a.length() > b.length())
    {
        cout << a.length() << endl;
    }
    else if (b.length() > a.length())
    {
        cout << b.length() << endl;
    }
    else
    {
        if (a.compare(b) == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a.length() << endl;
        }
    }
}