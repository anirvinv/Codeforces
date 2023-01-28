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
    int a[2][2];
    int sum = 0;
    F(i, 0, 2) {
        F(j, 0, 2) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    if (sum == 0) {
        cout << 0 << '\n';
    }
    else if (sum == 1) { cout << 1 << '\n'; }
    else if (sum == 2) {
        cout << 1 << '\n';
    }
    else if (sum == 3) {
        cout << 1 << '\n';
    }
    else {
        cout << 2 << '\n';
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