#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    ll mi, ma;

    mi = min(a, b);
    ma = max(a, b);

    bool hard = false;
    while (mi > 0)
    {
        int v1 = mi % 10;
        int v2 = ma % 10;
        if (v1 + v2 > 9)
        {
            hard = true;
            break;
        }
        mi /= 10;
        ma /= 10;
    }
    cout << (hard ? "Hard" : "Easy") << '\n';
}