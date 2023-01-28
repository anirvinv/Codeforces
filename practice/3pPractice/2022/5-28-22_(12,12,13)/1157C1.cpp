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
    F(i, 0, n)cin >> a[i];
    int l = 0;
    int r = n - 1;
    string ans = "";
    int last = -1;
    while (l <= r) {
        if (a[l] > last && a[r] > last) {
            if (a[l] < a[r]) {
                ans.push_back('L');
                last = a[l];
                l++;
            }
            else {
                ans.push_back('R');
                last = a[r];
                r--;
            }
        }
        else if (a[l] > last) {
            ans.push_back('L');
            last = a[l];
            l++;
        }
        else if (a[r] > last) {
            ans.push_back('R');
            last = a[r];
            r--;
        }
        else {
            break;
        }
    }
    cout << ans.length() << '\n';
    cout << ans << '\n';
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