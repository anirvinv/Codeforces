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
    vector<vector<ll>> cp(n);
    map<ll, ll> contained;
    F(i, 0, n) {
        G(k);
        F(j, 0, k) {
            G(cpi);
            contained[cpi]++;
            cp[i].push_back(cpi);
        }
    }
    for (vector<ll> v : cp) {
        for (ll e : v) {
            contained[e]--;
        }
        bool works = true;
        for (ll e : v) {
            if (contained[e] == 0) { works = false; break; }
        }
        if (works) {
            cout << "Yes\n";
            return;
        }
        for (ll e : v) {
            contained[e]++;
        }
    }
    cout << "No\n";
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