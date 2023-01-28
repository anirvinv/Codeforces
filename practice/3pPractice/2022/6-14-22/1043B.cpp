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
    vector<ll> a(n + 1);
    a[0] = 0;
    F(i, 1, n + 1) cin >> a[i];
    vector<ll> x;
    F(i, 1, n + 1) {
        x.push_back(a[i] - a[i - 1]);
    }
    string nums = "";
    for (ll e : x) {
        nums.push_back('0' + e);
    }
    int ns = nums.length();
    ll smallest = nums.length();
    set<ll> answers;
    FE(sz, 1, ns) {
        string pattern = nums.substr(0, sz);
        // if the rest of the string matches this pattern, then break
        bool broke = false;
        int count = 0;
        F(i, sz, n) {
            if (nums[i] != pattern[count++ % sz]) {
                broke = true;
                break;
            }
        }
        if (!broke) {
            answers.insert(sz);
        }
    }

    cout << answers.size() << '\n';
    for (ll e : answers) {
        cout << e << " ";
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