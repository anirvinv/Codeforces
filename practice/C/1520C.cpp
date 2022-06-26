#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << -1 << '\n';
    }
    else
    {

        int arr[n][n];
        int row = 0;
        int col = 0;
        for (int i = 1; i <= n * n; i += 2)
        {
            arr[row][col++] = i;
            if (col == n)
            {
                col = 0;
                row++;
            }
        }
        for (int i = 2; i <= n * n; i += 2)
        {
            arr[row][col++] = i;
            if (col == n)
            {
                col = 0;
                row++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << ' ';
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