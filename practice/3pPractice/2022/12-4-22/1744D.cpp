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
    F(i, 0, n) cin >> a[i];
    if (n == 1 && a[0] % 2 != 0) {
        cout << -1 << '\n';
        return;
    }
    ll need = n;
    for (ll e : a) {
        while (e % 2 == 0) {
            e /= 2;
            need--;
        }
    }
    if (need <= 0) {
        cout << 0 << '\n';
        return;
    }
    vector<ll> twos;
    FE(i, 1, n) {
        ll temp = i;
        ll counter = 0;
        while (temp % 2 == 0) {
            counter++;
            temp /= 2;
        }
        twos.push_back(counter);
    }
    sort(all(twos), [](ll a, ll b) {return a > b;});
    ll ans = 0;
    for (ll two : twos) {
        need -= two;
        ans++;
        if (need <= 0) break;
    }
    cout << (need > 0 ? -1 : ans) << '\n';

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