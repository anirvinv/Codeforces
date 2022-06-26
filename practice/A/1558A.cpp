#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(a) G(b);
    if (a == 1 && b == 1) {
        cout << 2 << '\n';
        cout << "0 2" << '\n';
        return;
    }
    ll break_max = 0;
    ll break_min = 0;
    ll games = a + b;
    ll mx = max(a, b);
    ll mi = min(a, b);
    if (games % 2 == 0) {
        // a = 3
        // b = 5
        // a b a b a b a b
        break_min = mx - games / 2;
        break_max = min(games / 2, mx) + games - mx;
    }
    else {
        // a = 5
        // b = 2
        //when picking min
        // a b a b a b a
        // when picking max
        // b a b a b a b

        break_min = mx - (games + 1) / 2;
        break_max = min((games + 1) / 2, mx) + games - mx;
    }
    debug(break_min);
    debug(break_max);
    cout << (games % 2 == 1 ? break_max - break_min + 1 : (break_max - break_min + 2) / 2) << '\n';
    for (int i = break_min; i <= break_max; i++) {
        cout << i << ' ';
        if (games % 2 == 0) {
            i++;
        }
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