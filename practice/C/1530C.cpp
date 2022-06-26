#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    fo(i, n) { cin >> arr1[i]; }
    fo(i, n) { cin >> arr2[i]; }

    sort(arr1.begin(), arr1.end(), greater<int>());
    sort(arr2.begin(), arr2.end(), greater<int>());

    int k = n - (n / 4);
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < k; i++)
    {
        s1 += arr1[i];
        s2 += arr2[i];
    }
    if (s1 >= s2)
    {
        cout << 0 << '\n';
    }
    else
    {
        // binary search the number of levels
        ll lo = -1;
        ll hi = LONG_LONG_MAX / 1000;

        while (hi - lo > 1)
        {
            ll mid = (lo + hi) / 2;
            ll totalSize = n + mid;
            ll cut = totalSize / 4;
            ll sum1 = 0;
            ll sum2 = 0;
            if (totalSize - cut < n)
            {
                for (int i = 0; i < n - (cut - mid); i++)
                {
                    sum2 += arr2[i];
                }
            }
            else
            {
                for (int e : arr2)
                {
                    sum2 += e;
                }
            }
            if (cut < n)
            {
                for (int i = 0; i < n - cut; i++)
                {
                    sum1 += arr1[i];
                }

                sum1 += (100 * mid);
            }
            else
            {
                sum1 = 100 * (totalSize - cut);
            }

            if (sum1 >= sum2)
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        cout << hi << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}