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
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    ll occ[10];
    memset(occ, 0, sizeof occ);
    for (ll e : a) {
        occ[(e % 10)]++;
    }
    vector<ll> ps = { 3,13,23 };
    for (ll p : ps) {
        F(i, 0, 10) {
            if (occ[i]) {
                occ[i]--;
                if (p - i >= 0) {
                    FE(j, 0, p - i) {
                        if (j < 10 && p - i - j < 10 && occ[j] && occ[p - i - j]) {
                            if ((p - i - j == j && occ[j] >= 2) || p - i - j != j) {
                                cout << "YES\n";
                                return;
                            }
                        }
                    }
                }
                occ[i]++;
            }
        }
    }
    cout << "NO\n";


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