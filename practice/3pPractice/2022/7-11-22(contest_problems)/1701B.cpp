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
    bool mk[n + 1];
    memset(mk, 0, sizeof mk);
    vector<ll> a(n);
    int idx = 0;
    FE(i, 1, n) {
        if (mk[i]) continue;
        ll temp = i;
        while (temp <= n) {
            mk[temp] = 1;
            a[idx++] = temp;
            temp *= 2;
        }
    }
    cout << 2 << '\n';
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