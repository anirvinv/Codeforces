#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    fo(i, n) { cin >> arr[i]; }

    ll sum = arr[0] + arr[n - 1];

    if (n > 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(arr[i + 1] - arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (arr[i] > arr[i + 1])
                {
                    sum -= (arr[i] - arr[i + 1]);
                }
            }
            else if (i == n - 1)
            {
                if (arr[i] > arr[i - 1])
                {
                    sum -= (arr[i] - arr[i - 1]);
                }
            }
            else
            {
                int side = max(arr[i + 1], arr[i - 1]);
                if (arr[i] > side)
                {
                    sum -= (arr[i] - side);
                }
            }
        }
    }
    else
    {
        sum /= 2;
    }
    cout << sum << '\n';
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