#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n;
    cin >> n;
    fo(i, n)
    {
        int val;
        cin >> val;
    }
    cout << 3 * n << '\n';
    for (int i = 0; i < n; i += 2)
    {
        fo(k, 6)
        {
            cout << (k % 2 == 0 ? 1 : 2) << " " << i + 1 << " " << i + 2 << '\n';
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