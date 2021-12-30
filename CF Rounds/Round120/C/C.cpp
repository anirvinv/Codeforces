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
        ll sum = 0;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
            sum += (ll)arr[i];
        }

        if (k >= sum)
        {
            cout << 0 << '\n';
        }
        else
        {
            sort(arr, arr + n);

            // decrement
            int lo = 0;
            int hi = arr[n - 1];
            int steps = hi + n;

            int arrcp[n];

            while (lo < hi)
            {
                int mid = (lo + hi) / 2;
                int localsteps = mid;
                int setter = arr[0] - mid;
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
                    localsteps++;
                }
                if (localSum <= k)
                {
                    lo = mid;
                    steps = min(localsteps, steps);
                }
                else
                {
                    hi = mid;
                }
            }
            cout << steps << '\n';
        }
    }
}