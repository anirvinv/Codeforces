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
void swap(ll& a, ll& b) {
    ll temp = a;
    a = b;
    b = temp;
}
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, 0, n) {
        a[i] = i + 1;
    }
    cout << n << '\n';
    for (ll e : a) {
        cout << e << ' ';
    }
    cout << '\n';
    F(i, 0, n - 1) {
        swap(a[i], a[i + 1]);
        for (ll e : a) {
            cout << e << ' ';
        }
        cout << '\n';
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