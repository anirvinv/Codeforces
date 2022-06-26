#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << "NO" << '\n';
    }
    else
    {
        int p1 = n / 2;
        if (floor(sqrt(p1)) * floor(sqrt(p1)) == p1)
        {
            cout << "YES" << '\n';
        }
        else if (n % 4 == 0)
        {
            int p2 = n / 4;
            if (floor(sqrt(p2)) * floor(sqrt(p2)) == p2)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
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