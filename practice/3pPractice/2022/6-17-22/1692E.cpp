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
    G(n) G(s);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    ll ml = 0;
    ll l = 0, r = 0;
    ll sum = 0;
    while (r < n) {
        if (sum <= s) {
            if (sum == s) {
                ml = max(ml, r - l);
            }
            sum += a[r];
            r++;
        }
        else {
            sum -= a[l];
            l++;
        }
    }
    while (l < n) {
        if (sum > s) {
            sum -= a[l];
            l++;
        }
        else if (sum == s) {
            ml = max(ml, r - l);
            break;
        }
        else {
            l++;
        }
    }
    if (ml) {
        cout << n - ml << '\n';
    }
    else {
        cout << -1 << '\n';
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