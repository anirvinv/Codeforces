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
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll sum = 0;
        if (2 * k == n)
        {
            int ptr1 = 0;
            int ptr2 = n - 1;
            fo(i, k)
            {
                sum += arr[ptr1] / arr[ptr2];
                ptr1++;
                ptr2--;
            }
        }
        else
        {
            int ptr2 = n - 1;
            int ptr1 = n - 2;
            fo(i, k)
            {
                sum += arr[ptr1] / arr[ptr2];
                ptr1 -= 2;
                ptr2 -= 2;
            }
        }

        cout << sum << endl;
    }
}