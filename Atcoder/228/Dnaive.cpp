#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 1048576;
    int arr[N];
    memset(arr, -1, sizeof arr);

    int q;
    cin >> q;

    int t, h;
    cin >> t >> h;

    if (t == 1)
    {
        arr[h % N] = h;
    }
    else
    {
        cout << arr[h & N] << '\n';
    }

    fo(i, q - 1)
    {
        int t;
        int x;
        cin >> t >> x;

        if (t == 1)
        {
            h = x;
            while (arr[h % N] != -1)
            {
                h++;
            }

            arr[h % N] = h;
        }
        else
        {
            cout << arr[x % N] << '\n';
        }
    }
}