#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

ll fdiv(ll x, ll y)
{
    if (x >= 0)
    {
        return x / y;
    }
    else
    {
        return (x - y + 1) / y;
    }
}

bool descending(int a, int b)
{
    return a > b;
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
        ll k;
        cin >> n;
        cin >> k;
        vector<int> arr(n);
        ll sum = 0;

        fo(i, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end(), descending);
        if (sum <= k)
        {
            cout << 0 << '\n';
        }
        else
        {
            ll remSum = sum;
            // arr[n-1] is the smallest element (sorted in descending order)
            remSum -= arr[n - 1];
            // when suffix is length 0
            ll ans = abs(arr[n - 1] - (k - remSum));
            // when suffix is 1 to n-1 long: range for iteration is [0, n - 2]
            for (int i = 0; i < n - 1; i++)
            {
                remSum -= arr[i];
                ll val = fdiv((k - remSum), i + 2);
                // wtf so apparently the max(..,0ll) was important...kms..wasted all that time...i get it now though...i think
                ans = min(ans, (i + 1) + max(arr[n - 1] - val, 0ll));
            }

            cout << ans << '\n';
        }
    }
}