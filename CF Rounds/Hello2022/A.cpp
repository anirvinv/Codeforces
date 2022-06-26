#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > (n + 1) / 2)
    {
        cout << -1 << '\n';
    }
    else
    {
        char arr[n][n];
        memset(arr, '.', sizeof arr);
        for (int i = 0; i < n; i += 2)
        {
            if (k > 0)
            {
                arr[i][i] = 'R';
                k--;
            }
            if (k == 0)
            {
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << '\n';
        }
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