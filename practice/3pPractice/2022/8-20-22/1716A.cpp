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
    if (n == 1) {
        cout << 2 << '\n';
        return;
    }
    if (n == 2 || n == 3) {
        cout << 1 << '\n';
        return;
    }
    ll ans = n / 3;
    n -= 3 * (n / 3);
    if (n % 2 == 1) {
        n += 3;
        ans--;
    }
    cout << ans + n / 2 << '\n';
    /*
    Solution:
        Basically, for n>3,
        substract as many 3s as you can from it. If the final result is odd,
        then add back a 3 and subtract as many 2s as you can. This works because
        you are always going forwards in this method. Also, when you are always
        going forward eg. 3x + 2y = n, x and y are positive. The only other way
        that 3x + 2y can be = n is when x = y and y = x, in which x + y is still the same.
    Reflection:
        I screwed up my first submission because I rushed and didn't think the
        solution through. Rushing always ends up failing. idk why i still think
        I could just accidentally get the solution right.
    */


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