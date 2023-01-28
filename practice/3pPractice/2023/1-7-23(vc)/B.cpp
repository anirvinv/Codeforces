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
    G(n) G(k);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];

    ll cv = 1, count = 0;
    F(i, 0, n) {
        if (a[i] == cv) { cv++; count++; }
    }
    cout << (n - count + k - 1) / k << '\n';

    // solution:
    // Take  5 7 1 3 4 6 2 as an example. In this case, you only need to move
    // {5 7} 1 {3 4 6} 2 to the end. These groups are bad cuz not sorted yet. 
    // You don't have to move 1 2 cuz they will be in the correct place once moved.
    // You can only do this subsequence starting with 1 cuz otherwise, 
    // the leftmost num would not be 1

    // Why is this the fastest?
    // because you want to avoid doing the op to minimize moves. To avoid, 
    // you leave the ones that are already in order and work around those nums
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