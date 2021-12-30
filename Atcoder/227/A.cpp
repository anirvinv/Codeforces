#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, a;
    cin >> n >> k >> a;

    int v = (a + k - 1) % n;
    if (v != 0)
    {
        cout << v << '\n';
    }
    else
    {
        cout << n << '\n';
    }
}