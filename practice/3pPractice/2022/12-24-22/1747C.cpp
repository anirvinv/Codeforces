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
    // 100 1 --> 1 99 --> 99 0 --> 0 98 |
    // 1 100 --> 99 0 --> 0 98 |
        // 100 1 1 --> 1 99 1 ---> 99 1 0 --> 0 98 1 |
        // 100 1 1 --> 1 99 1 ---> 1 99 0 --> 0 98 0 |

    // swap with the lowest num or highest num?
    // 2 2 1 A--> 1 1 2 B--> 1 0 2 A--> 0 0 2 |
    // 2 2 1
    /*
    current player will always swap with lowest num
    so that they will be able to swap back with an even lower num?
    */

    // if max == a1 and a1 > all others, then bob will lose guaranteed cuz his 
    // thing will run out b4 alice
    // otherwise bob wins?

    G(n);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    bool alice = *min_element(all(a)) != a[0];
    cout << (alice ? "Alice\n" : "Bob\n");

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