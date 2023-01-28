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

bool inc(vector<ll> a) {
    F(i, 0, a.size() - 1) {
        if (a[i] > a[i + 1])return false;
    }
    return true;
}

void solve() {
    G(n) G(k);
    vector<ll> p(k);
    F(i, 0, k) cin >> p[i];
    if (k == 1) { cout << "Yes\n";return; }
    // p[0]/(n-k+1) is the first prefix sum spot
    ll first = (p[0] + n - k) / (n - k + 1);
    if (p[0] < 0) first = p[0] / (n - k + 1);
    // debug(first);
    vector<ll> diff;
    F(i, 0, k - 1) diff.push_back(p[i + 1] - p[i]);
    // for (int i : diff) {
    //     debug(i);
    // }
    if (inc(diff) && (diff[0] >= first)) {
        cout << "Yes\n";
        return;
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