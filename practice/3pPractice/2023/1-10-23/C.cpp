#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
ll l2(ll n) {
    ll ans = 0;
    while (n) {
        n /= 2;
        ans++;
    }
    return ans;
}
void bprint(ll q) {
    vector<int> s;
    while (q) {
        s.push_back(q & 1);
        q /= 2;
    }
    reverse(all(s));
    for (int e : s) {
        cout << e;
    }
    cout << '\n';
}

void solve() {
    G(n) G(x);
    // if x has a bit that is set which n doesnt, its gg cuz that bit will always be 0
    // more specifically, x has to be n with a suffix of bits turned off
    if (n == x) {
        cout << n << '\n';
        return;
    }
    ll tn = n, tx = x;
    ll l2n = l2(n);
    FE(i, 0, l2n) {
        ll q = (((1ll << (l2n)) - 1) - ((1ll << i) - 1));
        if ((tn & q) == x) {
            if (x == 0) {
                cout << (1ll << l2n) << '\n';
                return;
            }
            else {
                // above last removed bit, we want a 1, 
                // but if already 1, then keep going left until 0 and change to 1
                ll res = n & q; // clearly res <= n. To make res >= n, we do the following:
                F(j, i, l2n) {
                    if (!(n & (1ll << i))) {
                        res |= (1ll << i);
                        break;
                    }
                }
                if (res < n) {
                    cout << "-1\n";
                    return;
                }
                cout << res << '\n';
            }
            break;
        }
        else if (i == l2n) {
            cout << "-1\n";
            return;
        }
    }
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