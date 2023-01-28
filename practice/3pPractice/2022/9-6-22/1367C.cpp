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
    string s; cin >> s;
    vector<ll> szs;
    ll zeroes = 0;
    F(i, 0, n) {
        zeroes += s[i] == '0';
        if (s[i] == '1' || i == n - 1) {
            if (zeroes) szs.push_back(zeroes);
            zeroes = 0;
        }
    }
    if (szs.size() == 0) {
        cout << 0 << '\n';
        return;
    }
    if (szs.size() == 1) {
        if (s[0] != s.back()) {
            cout << (szs[0] - k + k) / (k + 1) << '\n';
        }
        else if (s[0] == '1') {
            cout << (szs[0] - 2 * k + k) / (k + 1) << '\n';
        }
        else if (s[0] == '0') {
            cout << (szs[0] + k) / (k + 1) << '\n';
        }
        return;
    }
    ll ans = 0;
    F(i, 1, szs.size() - 1) {
        ans += (szs[i] - 2 * k + k) / (k + 1);
    }
    ans += s[0] == '1' ? (szs[0] - 2 * k + k) / (k + 1) : (szs[0] - k + k) / (k + 1);
    ans += s.back() == '1' ? (szs.back() - 2 * k + k) / (k + 1) : (szs.back() - k + k) / (k + 1);
    cout << ans << '\n';

    /*
    Reflection:
        I got the "solution" part which was going through the string and individually filling
        each of the gaps. But I didn't MAKE the formula before coding it so I suffered. F this problem.

    Solution:
        3 cases:
            bunch of zeroes either has 1s around it, only on one side,
            or the whole thing is just a string of zeroes
        So in the first case, subtract k of the beginning and k of the ending zeroes
        because they are next to ones. In the second case, subtract k only once,
        because there is only one 1 that is touching the zeroes. In the third case dont do anything.
        And then, go through each bunch and ceil divide by k+1
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