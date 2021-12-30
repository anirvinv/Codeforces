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
        int n, k;
        cin >> n >> k;
        ll arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        ll sum = 0;
        fo(i, n - (2 * k))
        {
            sum += arr[i];
        }

        for (int i = n - (2 * k); i < n - k; i++)
        {
            sum += arr[i] / arr[i + k];
        }

        cout << sum << '\n';
    }
}