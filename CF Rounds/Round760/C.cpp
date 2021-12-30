#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        ll divEven = arr[0];
        for (int i = 2; i < n; i += 2)
        {
            divEven = __gcd(divEven, arr[i]);
        }
        ll divOdd = arr[1];
        for (int i = 3; i < n; i += 2)
        {
            divOdd = __gcd(divOdd, arr[i]);
        }
        if (divOdd == divEven)
        {
            cout << 0 << endl;
        }
        else
        {
            bool divOddFail = false;
            fo(i, n)
            {
                if (i % 2 == 0)
                {
                    if (arr[i] % divOdd == 0)
                    {
                        divOddFail = true;
                        break;
                    }
                }
            }
            bool divEvenFail = false;
            fo(i, n)
            {
                if (i % 2 == 1)
                {
                    if (arr[i] % divEven == 0)
                    {
                        divEvenFail = true;
                        break;
                    }
                }
            }
            if (divOddFail && divEvenFail)
            {
                cout << 0 << endl;
            }
            else if (divOddFail)
            {
                cout << divEven << endl;
            }
            else
            {
                cout << divOdd << endl;
            }
        }
    }
}