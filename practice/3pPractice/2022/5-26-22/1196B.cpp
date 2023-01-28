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
    G(n) G(k);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    vector<int> idx;
    bool last = false;
    F(i, 0, n - 1) {
        if (a[i] % 2 == 1 && a[i + 1] % 2 == 1) {
            idx.push_back(i);
        }
        else if (a[i] % 2 == 1 && a[i + 1] % 2 == 0) {
            idx.push_back(i + 1);
            i++;
        }
        else if (a[i] % 2 == 0 && a[i + 1] % 2 == 1) {
            idx.push_back(i + 1);
            i++;
        }
        else {
            if (!idx.empty()) {
                idx.pop_back();
                idx.push_back(i + 1);
            }
        }
        if (!idx.empty()) {
            last = (idx.back() == n - 1);
        }

    }
    if (!last) {
        if (a[n - 1] % 2 == 0 && !idx.empty()) {
            idx.pop_back();
            idx.push_back(n - 1);
        }
        else if (a[n - 1] % 2 == 1) {
            idx.push_back(n - 1);
        }
    }
    if (idx.size() > 0 && k <= idx.size() && k % 2 == idx.size() % 2) {
        cout << "YES\n";
        reverse(all(idx));
        if (k < idx.size()) {
            int sz = idx.size();
            F(i, 0, sz - k) {
                idx.pop_back();
            }
        }
        reverse(all(idx));
        F(i, 0, idx.size()) {
            cout << idx[i] + 1 << " ";
        }
        cout << '\n';

    }
    else {
        cout << "NO\n";
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