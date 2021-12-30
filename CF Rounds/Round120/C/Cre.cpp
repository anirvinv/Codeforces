#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll k;
        cin >> n;
        cin >> k;
        int arr[n];
        ll sum = 0;
        fo(i, n)
        {
            cin >> arr[i];
            sum += (ll)arr[i];
        }

        sort(arr, arr + n);
        // no decrement
        ll lo = -1;

        // decrement a lot
        ll hi = 2000000000;

        int steps = hi;
        while (hi - lo > 1)
        {
            int mid = (lo + hi) / 2;
            int setter = arr[0] - mid;
            int localSteps = mid;
            ll localSum = sum;

            localSum -= arr[0];
            localSum += setter;
            for (int i = n - 1; i >= 1; i--)
            {
                if (localSum <= k)
                {
                    break;
                }
                localSum -= arr[i];
                localSum += setter;
                localSteps++;
            }

            if (localSum <= k)
            {
                hi = mid;
                steps = min(steps, localSteps);
            }
            else
            {
                lo = mid;
            }
        }
        cout << steps << '\n';
    }
}