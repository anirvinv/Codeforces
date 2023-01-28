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
    G(n) G(c) G(q);
    string s;
    cin >> s;
    vector<tuple<ll, ll, ll>> o(c);
    // {size, left, right}
    ll size = s.size() + 1;
    F(i, 0, c) {
        G(l) G(r);
        o[i] = { size, l,r };
        size += r - l + 1;
    }
    while (q--) {
        G(k);
        while (k > s.size()) {
            // backtrack
            FFE(i, c - 1, 0) {
                if (k >= get<0>(o[i])) {
                    k = k - get<0>(o[i]) + get<1>(o[i]);
                }
            }
        }
        cout << s[k - 1] << '\n';
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