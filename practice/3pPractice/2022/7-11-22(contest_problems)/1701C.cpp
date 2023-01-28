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
    G(n) G(m);
    vector<ll> a(m);
    map<ll, ll> cnt;
    F(i, 0, m) { cin >> a[i]; cnt[a[i]]++; }
    ll l = -1, r = 2 * m;
    // l never works, r always works
    ll it = 0;
    while (r - l > 1) {
        it++;
        ll mid = (l + r) / 2;
        bool works = false;
        ll c = 0;
        FE(i, 1, n) {
            // each person can complete mid/2 two hour tasks
            // we prioritize 1 hour tasks first so each person completes 
            // min(mid, cnt[i]) 1 hour tasks
            // and then whatever two hour tasks they have time for
            // = (t - min(mid, cnt[i]))/2 --> remaining time/2
            c += min(mid, cnt[i]) + (mid - min(mid, cnt[i])) / 2;
        }
        works = c >= m;
        if (works) {
            r = mid;
        }
        else {
            l = mid;
        }
    }
    cout << r << '\n';

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