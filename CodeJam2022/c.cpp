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
    vector<ll> s(n);
    F(i, n) cin >> s[i];
    sort(all(s));
    ll count = 0;
    F(i, n) {
        if (s[i] > count) {
            count++;
        }
    }
    cout << count << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    F(i, t) {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }
}