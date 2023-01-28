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
    map<ll, ll> cnt;
    F(i, 0, n) { cin >> a[i]; cnt[a[i]]++; }
    for (pll p : cnt) {
        if (p.second < 2) {
            cout << -1 << '\n';
            return;
        }
    }
    int idx = 1;
    for (pll p : cnt) {
        F(i, 1, p.second) {
            cout << idx + i << ' ';
        }
        cout << idx << ' ';
        idx += p.second;
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