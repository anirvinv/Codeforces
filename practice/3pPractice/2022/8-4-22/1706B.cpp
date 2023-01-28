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
    vector<ll> c(n);
    F(i, 0, n) cin >> c[i];
    map<ll, vector<ll>> mp;
    F(i, 0, n) {
        mp[c[i]].push_back(i + 1);
    }
    FE(cl, 1, n) {
        // debug(cl);
        // for (ll e : mp[cl]) {
        //     cout << e << " ";
        // }
        // cout << '\n';
        if (mp[cl].size() == 0) {
            cout << "0 ";
        }
        else if (mp[cl].size() == 1) {
            cout << "1 ";
        }
        else {
            vector<ll> ids = mp[cl];
            ll sz = ids.size();
            // first even
            int ptr = 0;
            while (ptr < sz && ids[ptr] % 2 != 0) {
                ptr++;
            }
            bool flip = 0;
            // 0=even, 1=odd
            ll size1 = 1;
            F(i, ptr + 1, sz) {
                if ((ids[i] % 2) == !flip) {
                    size1++;
                    flip = !flip;
                }
            }
            ptr = 0;
            while (ptr < sz && ids[ptr] % 2 == 0) {
                ptr++;
            }
            flip = 1;
            // 0=even, 1=odd
            ll size2 = 1;
            F(i, ptr + 1, sz) {
                if ((ids[i] % 2) == !flip) {
                    size2++;
                    flip = !flip;
                }
            }
            cout << max(size1, size2) << " ";
        }
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