#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll arr[n];
    fo(i, n)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    vector<ll> differences;
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i + 1] - arr[i] > x))
        {
            differences.push_back(arr[i + 1] - arr[i]);
        }
    }

    sort(differences.begin(), differences.end());
    ll groups = differences.size() + 1;
    fo(i, differences.size())
    {
        if ((differences[i] / x - 1) <= k)
        {
            if (differences[i] % x == 0)
            {

                k -= (differences[i] / x - 1);
                groups--;
            }
            else if ((differences[i] / x) <= k)
            {
                k -= differences[i] / x;
                groups--;
            }
            else
            {
                break;
            }
            if (k == 0)
            {
                break;
            }
        }
    }
    cout << groups << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
}