#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i, L, R) for (int i = (L); i < (R); i++)
#define FE(i, L, R) for (int i = (L); i <= (R); i++)
#define FF(i, L, R) for (int i = (L); i > (R); i--)
#define FFE(i, L, R) for (int i = (L); i >= (R); i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007  // 998244353
void solve() {}
int main() {
    set<ll> st;
    FE(i, 1, 25) {
        ll l1, l2;
        cout << "? " << i << ' ' << i + 1 << '\n';
        fflush(stdout);
        cin >> l1;
        cout << "? " << i + 1 << ' ' << i << '\n';
        fflush(stdout);
        cin >> l2;
        st.insert(l1);
        st.insert(l2);
        if (st.size() > 1) {
            break;
        }
        st.clear();
    }
    ll ans = 0;
    for (ll e : st) {
        ans += e;
    }
    cout << "! " << ans << '\n';
    fflush(stdout);
}