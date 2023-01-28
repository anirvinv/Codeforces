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
    vector<ll> l(n);
    F(i, 0, n) {
        cin >> a[i];
    }
    F(i, 0, n) {
        cin >> l[i];
    }
    vector<ll> s;
    F(i, 0, n) {
        if (!l[i]) {
            s.push_back(a[i]);
        }
    }
    if (s.size()) {
        sort(all(s));
        reverse(all(s));
        int ptr = 0;
        int ptr2 = 0;
        while (ptr < s.size()) {
            while (ptr2 < a.size()) {
                if (!l[ptr2]) {
                    a[ptr2] = s[ptr];
                    ptr2++;
                    break;
                }
                ptr2++;

            }
            ptr++;
        }
    }
    for (ll e : a) {
        cout << e << " ";
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