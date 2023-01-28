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
    G(n) G(k);
    vector<ll> h(n), p(n);
    F(i, 0, n) cin >> h[i];
    F(i, 0, n) cin >> p[i];
    vector<pll> hp(n);
    F(i, 0, n) {
        hp[i] = { h[i],p[i] };
    }
    sort(all(hp), [](pll a, pll b) {
        if (a.second == b.second) return a.first > b.first;
        else return a.second < b.second;
        });

    // for (pll e : hp) {
    //     cout << e.first << " ";
    // }
    // cout << '\n';
    int total_damage = 0;
    F(i, 0, n) {
        hp[i].first -= total_damage;
        if (k > 0) {
            if (hp[i].first > k) {
                while (hp[i].first > 0 && k > 0) {
                    hp[i].first -= k;
                    total_damage += k;
                    k -= hp[i].second;
                }
            }
            else {
                hp[i].first = 0;
            }
        }
    }
    F(i, 0, n) {
        // cout << hp[i].first << ' ';
        if (hp[i].first > 0) {
            cout << "NO\n";
            return;
        }
    }
    // cout << '\n';
    cout << "YES\n";

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