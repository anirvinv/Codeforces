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

bool works(ll x) {
    return __builtin_popcount(x + 1) <= 1;
}

void solve() {
    G(x);
    vector<ll> A;
    ll steps = 0;
    while (!works(x)) {
        steps++;
        ll temp = x;
        ll n = 0;
        while (temp) {
            temp /= 2;
            n++;
        }
        x ^= ((1ll << n) - 1);
        A.push_back(n);
        if (works(x)) {
            break;
        }
        steps++;
        x++;
    }
    cout << steps << '\n';
    F(i, 0, A.size()) {
        cout << A[i] << " ";
    }
    cout << '\n';

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