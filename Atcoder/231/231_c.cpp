#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;

    int arr[n];
    fo(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    fo(i, q)
    {
        int x;
        cin >> x;

        int lo = 0;
        int hi = n - 1;
        while (hi - lo > 1)
        {
            int mid = (lo + hi) / 2;
            if (arr[mid] >= x)
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        if (hi == n - 1)
        {
            if (arr[hi] >= x)
            {

                cout << n - hi << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (hi == 1)
        {
            if (arr[0] >= x)
            {
                cout << n << endl;
            }
            else if (arr[1] >= x)
            {
                cout << n - 1 << endl;
            }
        }
        else
        {

            cout << n - hi << endl;
        }
    }
}