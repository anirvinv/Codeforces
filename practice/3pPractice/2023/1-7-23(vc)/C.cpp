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
    // elements can only appear max of 2x
    // when element only appears once, p[i] = q[i] at that place
    /*
        construct p first, and then q based on p
        a: 1 6 6 2 3 5 8 8
        p: 1 6   2 3   8
        q: 1     2 3
    */
    G(n);
    vector<ll> a(n), p(n, 0), q(n, 0);
    vector<ll> cnt(n + 1);
    F(i, 0, n) {
        cin >> a[i]; cnt[a[i]]++;
        if (cnt[a[i]] == 1) {
            p[i] = a[i];
        }
        if (cnt[a[i]] == 2) {
            q[i] = a[i];
        }
    }
    F(i, 0, n) {
        if (cnt[a[i]] == 1) {
            q[i] = a[i];
        }
    }
    for (ll e : a) {
        if (cnt[1] > 1 || cnt[n] < 1 || (cnt[e] != 1 && cnt[e] != 2)) {
            cout << "NO\n";
            return;
        }
    }
    set<ll> s, s1;
    FE(i, 1, n) { s.insert(i); s1.insert(i); }
    F(i, 0, n) {
        s.erase(p[i]);
        s1.erase(q[i]);
    }
    F(i, 0, n) {
        if (p[i] == 0) {
            auto lb = s.lower_bound(q[i]);
            if (s.begin() == lb) {
                cout << "NO\n";
                return;
            }
            else {
                p[i] = *(--lb);
                s.erase(p[i]);
            }
        }
    }
    F(i, 0, n) {
        if (q[i] == 0) {
            auto lb = s1.lower_bound(p[i]);
            if (s1.begin() == lb) {
                cout << "NO\n";
                return;
            }
            else {
                q[i] = *(--lb);
                s1.erase(q[i]);
            }
        }
    }
    cout << "YES\n";
    F(i, 0, n) {
        cout << p[i] << " ";
    }
    cout << '\n';
    F(i, 0, n) {
        cout << q[i] << " ";
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