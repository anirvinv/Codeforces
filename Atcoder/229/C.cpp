#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n >> w;

    pair<int, int> arr[n];

    fo(i, n)
    {
        int a1, b1;
        cin >> a1 >> b1;
        arr[i] = make_pair(a1, b1);
    }

    sort(arr, arr + n);

    ll td = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i].second <= w)
        {
            w -= arr[i].second;
            td += (ll)arr[i].second * arr[i].first;
        }
        else
        {
            td += (ll)w * arr[i].first;
            break;
        }
    }
    cout << td << '\n';
}