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
void solve() {
    G(n);
    vector<pair<ll, ll>> p(n);
    vector<pair<ll, ll>> c(n);
    F(i, 0, n) {
        G(x) G(y);
        p[i] = { x,y };
    }
    F(i, 0, n) {
        G(x) G(y);
        c[i] = { x,y };
    }
    bool taken[n];
    F(i, 0, n) {
        memset(taken, 0, sizeof taken);
        ll xn = p[0].first + c[i].first;
        ll yn = p[0].second + c[i].second;
        taken[i] = 1;

        F(j, 1, n) {
            bool h = 0;
            F(k, 0, n) {
                if (!taken[k] && (p[j].first + c[k].first == xn) && (p[j].second + c[k].second == yn)) {
                    taken[k] = 1;
                    h = 1;
                    break;
                }
            }
            if (!h) break;
        }
        bool full = 1;
        for (bool b : taken) {
            full &= b;
        }
        if (full) {
            cout << xn << " " << yn << '\n';
            return;
        }
    }


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