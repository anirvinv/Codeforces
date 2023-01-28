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
    // 2
    // 1 2 2 1 == 2
    // 2 1 1 2 == 2
    // 3
    // 1 2 3 3 2 1 == 6
    // 1 3 2 2 3 1 == 6
    // 2 1 3 3 1 2 == 6
    // 2 3 1 1 3 2 == 6
    // 3 1 2 2 1 3 == 6
    // 3 2 1 1 2 3 == 6
    // 4
    // 1 2 3 4 4 3 2 1 == 12
    // 1 2 4 3 3 4 2 1 == 12
    // pattern n * (n-1) * n!

    /*
        Explanation:
        So the only thing that needs to be explained is why the beauty of every permutation is the same, n*(n-1).
        First, every sequence we put together is a palindrome. Every number n in the permutation has n - 1 numbers less than it.
        Eg. 3 > 2, 1. In the sequence 1 2 3 4 ... n n .. 4 3 2 1, it is obvious that every number hits n - 1 numbers. When we make
        a change on the left side, for example swap th 3 and the 4, we have to do the same on the right side. So, in the seq
        1 2 4 3 ... n n ... 3 4 2 1, the 4 on the right loses a 3, but the 4 on the left gets an extra 3. So this way, the nums are
        cancelled out. So if you swap any number a with any number b on the left, the same has to be done on the right. However, the
        max(a,b) on the left gains another min(a,b) to its right and max(a,b) loses a min(a,b) to its right on the right half.

        So this way, the n*(n-1) beauty is preserved in these palindromes.
    */

    G(n);
    if (n == 1) {
        cout << "0\n";
        return;
    }
    ll ans = n * (n - 1);
    F(i, 1, n + 1) {
        ans *= i;
        ans %= MOD;
    }
    cout << ans << '\n';

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