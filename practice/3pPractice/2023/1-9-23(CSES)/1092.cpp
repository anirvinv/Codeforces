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
    if (n % 4 != 3 && n % 4 != 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (n % 4 == 0) {
        cout << n / 2 << '\n';
        cout << "1 4 ";
        for (int i = 0; i < (n - 4) / 4; i++) {
            cout << 6 + 4 * i << " ";
            cout << 7 + 4 * i << " ";
        }
        cout << '\n';
        cout << n / 2 << '\n';
        cout << "2 3 ";
        for (int i = 0; i < (n - 4) / 4; i++) {
            cout << 5 + 4 * i << " ";
            cout << 8 + 4 * i << " ";
        }
        cout << '\n';
    }
    else {
        cout << n / 2 << '\n';
        cout << "3 ";
        for (int i = 0; i < n / 4; i++) {
            cout << 5 + 4 * i << " ";
            cout << 6 + 4 * i << " ";
        }
        cout << '\n';
        cout << n / 2 + 1 << '\n';
        cout << "1 2 ";
        for (int i = 0; i < n / 4; i++) {
            cout << 4 + 4 * i << " ";
            cout << 7 + 4 * i << " ";
        }
        cout << '\n';
    }
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