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
    G(a) G(b) G(n) G(m);
    // type one guests balance shit out
    // eg. 4 3 --> 3 3 --> 3 2 --> 2 2
    // type two guests make shit worse
    // so better to make type 1 guests go first because they can take from either pile

    // t1 can take from both piles, but t2 can only take from the lower pile.
    // so get rid of t2 first and then use the compromising type, t1
    if (a + b < n + m) {
        cout << "No\n";
        return;
    }
    if (m <= min(a, b)) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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