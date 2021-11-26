#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    while (true)
    {
        ll n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        bool on = false;
        for (ll i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                on = !on;
            }
        }
        on = !on;

        if (on)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}