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
    ll zeroes = 0;
    F(i, 0, n) { cin >> a[i]; }
    sort(all(a));
    vector<ll> an;
    ll pos = 0;
    ll neg = 0;
    for (ll p : a) {
        pos += p > 0;
        neg += p < 0;
        if (p == 0 && zeroes <= 5) {
            zeroes++;
            an.push_back(0);
        }
        if (p != 0) {
            an.push_back(p);
        }
    }

    if (pos >= 3 || neg >= 3) {
        cout << "NO\n";
        return;
    }n = an.size();
    F(i, 0, n) {
        F(j, i + 1, n) {
            F(k, j + 1, n) {
                if (find(all(an), an[i] + an[j] + an[k]) == an.end()) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
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