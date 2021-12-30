#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

ll XORupto(ll a)
{
    ll res = 0;
    ll mod = (a - 1) % 4;
    if (mod == 0)
    {
        res = a - 1;
    }
    else if (mod == 1)
    {
        res = 1;
    }
    else if (mod == 2)
    {
        res = a;
    }
    else
    {
        res = 0;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        ll res = XORupto(a);
        if (res == b)
        {
            cout << a << '\n';
        }
        else
        {
            if ((res ^ b) == a)
            {
                cout << a + 2 << '\n';
            }
            else
            {
                cout << a + 1 << '\n';
            }
        }
    }
}
