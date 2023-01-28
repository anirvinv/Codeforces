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
bool csort(pll a, pll b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

void solve() {
    G(n);
    vector<pll> a;
    F(i, 0, n) {
        G(x) G(y);
        a.push_back({ x,1 });
        a.push_back({ y,-1 });
    }
    sort(all(a));
    ll curr = 0;
    ll mx = -1;
    ll year = 0;
    for (auto p : a) {
        curr += p.second;
        if (curr > mx) {
            mx = curr;
            year = p.first;
        }
    }
    cout << year << " " << mx << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}