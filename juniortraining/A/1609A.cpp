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
        int n;
        cin >> n;

        ll arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int l = 0;
        int r = n - 1;
        while (arr[r] % 2 != 0 && r > 0)
        {
            r--;
        }
        while (l < r)
        {
            if (arr[l] % 2 != 0)
            {
                l++;
            }
            else
            {
                while (arr[l] % 2 == 0)
                {
                    arr[l] /= 2;
                    arr[r] *= 2;
                }
            }
        }
        ll sum = 0;
        fo(i, n)
        {
            sum += arr[i];
        }
        cout << sum << '\n';
    }
}