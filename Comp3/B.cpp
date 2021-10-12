#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int base2(int k)
{

    int result = 0;
    int i = 1;
    while (k > 0)
    {
        result += k % 2 * i;
        k /= 2;
        i *= 10;
    }

    return result;
}

ll basen(int n, int kb2)
{
    ll result = 0;
    int i = 0;

    while (kb2 > 0)
    {
        if (kb2 % 10 == 1)
        {
            result += (ll)pow(n, i);
        }

        kb2 /= 10;
        i++;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ll n;
        ll k;
        cin >> n >> k;

        int kb2 = base2(k);
        ll nraised = basen(n, kb2);

        cout << nraised % (int)(pow(10, 9) + 7) << endl;
    }
}