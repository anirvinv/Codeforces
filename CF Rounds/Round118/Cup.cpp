#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

ll totalDamage(ll k, ll diff[], int n)
{
    ll res = 0;
    fo(i, n)
    {
        res += min(k, diff[i]);
    }
    res += k;
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
        int n;
        ll h;
        cin >> n >> h;
        ll arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        ll differences[n - 1];
        ll totalPossible = arr[n - 1] - arr[0];
        fo(i, n - 1)
        {
            differences[i] = arr[i + 1] - arr[i];
        }
        ll lo = 1;
        ll hi = h + 2;
        while (hi - lo > 1)
        {
            ll m = (hi + lo) / 2;
            ll damage = totalDamage(m, differences, n - 1);
            if (damage > h)
            {
                hi = m;
            }
            else
            {
                lo = m;
            }
        }
        ll k = lo;
        if (totalDamage(k, differences, n - 1) < h)
        {
            k = hi;
        }
        cout << k << endl;
    }
}