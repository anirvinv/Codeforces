#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(q);

    vector<ll> a(n);
    ll sum = 0;
    map<ll, ll> a_i;
    F(i, n) { cin >> a[i]; sum += a[i]; a_i[i + 1] = a[i]; }
    ll last_sum = 0;
    for (int k = 0; k < q; k++) {
        G(t);
        if (t == 1) {
            G(i) G(x);
            if (a_i[i] != 0) {
                sum -= a_i[i];
            }
            else {
                sum -= last_sum / n;
            }
            a_i[i] = x;
            sum += x;
        }
        else {
            G(x);
            sum = x * n;
            last_sum = sum;
            a_i.clear();
        }
        cout << sum << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}