#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, n) cin >> a[i];
    sort(all(a));
    if (n % 2 == 1) {
        cout << "NO" << '\n';
        return;
    }
    vector<ll> ans(n, 0);
    int count = 0;
    for (int i = 0; i < n / 2; i++) {
        ans[count] = a[i];
        count += 2;
    }
    count = 1;
    for (int i = n / 2; i < n; i++) {
        ans[count] = a[i];
        count += 2;
    }
    bool flip = ans[0] < ans[1];
    for (int i = 1; i < n - 1; i++) {
        if (ans[i] < ans[i + 1] != !flip || ans[i] == ans[i + 1]) {
            cout << "NO\n";
            return;
        }
        flip = !flip;
    }

    cout << "YES" << '\n';
    for (ll e : ans) {
        cout << e << " ";
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--) {
        solve();
    }
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, L, R) for (int i = L; i < R; i++)  // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--) {
        solve();
    }
}