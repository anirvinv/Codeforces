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
void swap(char& x, char& y) {
    char temp = x;
    x = y;
    y = temp;
}
void solve() {
    G(n) G(k);
    string s;
    cin >> s;
    ll sum = 0;
    F(i, 0, n) {
        sum += (s[i] - '0');
    }
    int idx = 0;
    while (idx < n && s[idx] == '0') {
        idx++;
    }
    int fm = idx;
    int idx1 = n - 1;
    while (idx1 >= 0 && s[idx1] == '0') {
        idx1--;
    }
    int lm = (n - 1 - idx1);
    if (sum == 1) {
        if (k >= lm) {
            cout << 1 << '\n';
        }
        else if (k >= fm) {
            cout << 10 << '\n';
        }
        else {
            cout << 11 << '\n';
        }
        return;
    }
    else if (sum > 1) {
        if (k >= fm + lm) {
            swap(s[idx], s[0]);
            swap(s[idx1], s[n - 1]);
        }
        else if (k >= lm) {
            swap(s[idx1], s[n - 1]);
        }
        else if (k >= fm) {
            swap(s[idx], s[0]);
        }
    }
    ll ans = 0;
    F(i, 0, n - 1) {
        ans += 10 * (s[i] - '0') + (s[i + 1] - '0');
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