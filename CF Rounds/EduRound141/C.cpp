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
void solve(int testcase) {
    G(n) G(m);
    int place = 1;
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    vector<pll> ac(n);
    F(i, 0, n) { ac[i] = {a[i], i}; }
    sort(all(ac));
    vector<ll> ow(n);
    F(i, 0, n) { ow[i] = i; }

    ll wins = 0, tm = m;
    set<pll> beaten;
    F(i, 0, n) {
        if (tm >= ac[i].first) {
            wins++;
            tm -= ac[i].first;
            beaten.insert(ac[i]);
        } else {
            ow[i]++;
        }
    }
    F(i, 0, n) {
        if (ow[i] == wins + 1 && wins != i + 1 &&
            beaten.lower_bound({a[i] - tm, 0}) != beaten.end()) {
            // if someone won and got incrmented to wins+1
            place--;
        }
    }
    F(i, 0, n) { place += ow[i] > wins; }

    cout << place << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    FE(tt, 1, t) { solve(tt); }
}