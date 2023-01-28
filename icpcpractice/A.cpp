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
void solve() {
    vector<ll> d1(6);
    vector<ll> d2(6);
    F(i, 0, 6) { cin >> d1[i]; }
    F(i, 0, 6) { cin >> d2[i]; }
    long double wins1 = 0.0;
    long double wins2 = 0.0;
    F(i, 0, 6) {
        F(j, 0, 6) {
            wins1 += d1[i] > d2[j];
            wins2 += d1[i] < d2[j];
        }
    }

    cout << setprecision(5) << fixed << wins1 / (wins1 + wins2) << '\n';
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