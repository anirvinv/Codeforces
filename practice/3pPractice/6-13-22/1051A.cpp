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

char type(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 'u';
    }
    else if (c >= 'a' && c <= 'z') {
        return 'l';
    }
    else {
        return 'd';
    }


}

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    ll l = 0;
    ll u = 0;
    ll d = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            u++;
        }
        else if (c >= 'a' && c <= 'z') {
            l++;
        }
        else {
            d++;
        }
    }
    if (l && u && d) {
        cout << s << '\n';
        return;
    }
    ll sum = l + u + d;
    if (sum == u || sum == l || sum == d) {
        // only one of them is present
        if (u) {
            s[0] = 'a';
            s[1] = '1';
        }
        else if (d) {
            s[0] = 'A';
            s[1] = 'a';
        }
        else {
            s[0] = 'A';
            s[1] = '1';
        }
    }
    else {
        // one is missing
        char m;
        if (!u)
            m = 'A';
        else if (!d)
            m = '1';
        else
            m = 'a';

        char o;
        if (u > 1)
            o = 'u';
        else if (d > 1)
            o = 'd';
        else if (l > 1)
            o = 'l';

        F(i, 0, n) {
            if (type(s[i]) == o) {
                s[i] = m;
                break;
            }
        }
    }
    cout << s << '\n';



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