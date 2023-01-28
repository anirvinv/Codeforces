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
    vector<ll> a(k);
    vector<ll> nums(n);
    F(i, 0, n) { nums[i] = i + 1; }
    F(i, 0, k) cin >> a[i];
    int idx = 0;
    F(i, 0, k) {
        int e = a[i];
        idx += e % nums.size();
        idx %= nums.size();
        cout << nums[idx] << " ";
        nums.erase(nums.begin() + idx);
    }
    cout << '\n';


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