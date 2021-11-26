#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x;
    cin >> n >> x;
    int distress = 0;
    while (n--)
    {
        char sign;
        ll num;
        cin >> sign;
        cin >> num;

        if (sign == '+')
        {
            x += num;
        }
        else
        {
            if (num <= x)
            {
                x -= num;
            }
            else
            {
                distress++;
            }
        }
    }
    cout << x << " " << distress << endl;
}