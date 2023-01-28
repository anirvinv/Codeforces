#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    if (n % 2 == 0) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    vector<ll> a(2 * n, 0);

    bool marked[2 * n + 1];
    memset(marked, 0, sizeof marked);

    ll curr = 0;
    ll count = 1;
    while (!marked[curr]) {
        a[curr] = count;
        a[(curr + n) % (2 * n)] = count + 1;
        marked[curr] = 1;
        marked[(curr + n) % (2 * n)] = 1;
        count += 2;
        curr = (curr + n + 1) % (2 * n);
    }

    F(i, 2 * n) cout << a[i] << " ";
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}