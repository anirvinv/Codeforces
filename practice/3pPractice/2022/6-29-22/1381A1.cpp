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
    // flip the fourth bit
    // 1,2,3,4,5,6       - 6
    // x6,x5,x4,x3,x2,x1 - 4

    // 3,4,5,6,x2,x1     - 6
    // 1,2,x6,x5,x4,x3
    // n, l, n --> inverts and reverses suffix length l

    // 1,2,3,4,5,6       - 5
    // x5,x4,x3,x2,x1,6  - 4
    // 2,3,4,5,x1,6      - 5
    // 1,x5,x4,x3,x2,6

    // 1,2,3,4,5,6       - 5
    // x5,x4,x3,x2,x1,6  - 1
    // 5,x4,x3,x2,x1,6  - 5
    // 1,2,3,4,x5,6

    // k 1 k ==> flips the kth bit
    G(n);
    string a, b;
    vector<ll> ans;
    cin >> a >> b;
    F(i, 0, n) {
        if (a[i] != b[i]) {
            ans.push_back(i + 1);
            ans.push_back(1);
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << ' ';
    for (ll e : ans) {
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