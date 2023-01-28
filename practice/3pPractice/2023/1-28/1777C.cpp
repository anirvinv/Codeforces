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
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    sort(all(a));
    /*
        go through 1 --> m and start putting in biggest number that mods to 0 if not already in set?
            MAYBE BAD because if we had 14 and 49, 14 has 2 and 7 whereas 49 only has 7

        sort by most factors that are <= m?
        need a quick way to check if some number is already included in current team

        ---------------------------------------------------------------------------------------------
        shit the difference between any two students is minimzed...forgot about the main constraint. We arent minimizing the number of elements,
        we are just minimizing the diff between largest and smallest

        So maybe go through each ai in a and get their factors in sqrt(ai) time And then merge the ones that are subset of other
        ... this is n^(3/2) + n^2

        binary search?
        like we remove everything up to a point and check if those are good..? Wait is this monotonic? no its not

        answer: two pointer
        3 4 5 6 7
    */
    int l = 0, r = 1;
    ll ans = LLONG_MAX;

    vector<ll> f(m + 1);
    ll p_count = 0;

    for (int i = 1; i * i <= a[l]; i++) {
        if (a[l] % i == 0) {
            if (i <= m) {
                p_count += !f[i];
                f[i]++;

            }
            if ((a[l] / i) <= m) {
                p_count += !f[a[l] / i];
                f[a[l] / i]++;
            }
        }
    }
    if (p_count == m) {
        cout << "0\n";
        return;
    }
    while (r <= n) {
        // debug(r);
        // FE(i, 1, m) {
        //     cout << f[i] << ' ';
        // }
        // cout << '\n';

        if (p_count == m) {
            ans = min(ans, a[r - 1] - a[l]);
            // remove from f array
            for (int i = 1; i * i <= a[l]; i++) {
                if ((a[l] % i) == 0) {
                    if (i <= m) {
                        f[i] = max(f[i] - 1, 0ll);
                        p_count -= !f[i];
                    }
                    if ((a[l] / i) <= m) {
                        f[a[l] / i] = max(f[a[l] / i] - 1, 0ll);
                        p_count -= !f[a[l] / i];
                    }
                }
            }
            l++;
            if (p_count == m && l < n)
                ans = min(ans, a[r - 1] - a[l]);
        }
        else {
            if (r == n) break;

            // add to f array
            for (int i = 1; i * i <= a[r]; i++) {
                if (a[r] % i == 0) {
                    if (i <= m) {
                        p_count += !f[i];
                        f[i]++;

                    }
                    if ((a[r] / i) <= m) {
                        p_count += !f[a[r] / i];
                        f[a[r] / i]++;
                    }
                }
            }
            r++;
        }
    }
    if (ans == LLONG_MAX) {
        cout << "-1\n";
    }
    else {
        cout << ans << "\n";
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