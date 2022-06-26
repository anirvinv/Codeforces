#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

pair<ll, ll> mul(pair<ll, ll> f, ll v) {
    if (v == 0) {
        return make_pair(0, 0);
    }
    ll n = f.first * v;
    ll d = f.second;
    ll g = __gcd(n, d);
    n /= g;
    d /= g;
    return make_pair(n, d);
}

pair<ll, ll> add(pair<ll, ll> f1, pair<ll, ll> f2) {
    ll d1 = f1.second;
    ll d2 = f2.second;
    ll n1 = f1.first;
    ll n2 = f2.first;
    if (n2 == 0) {
        return f1;
    }
    if (n1 == 0) {
        return f2;
    }
    if (d1 == d2) {
        return make_pair((n1 + n2) / __gcd(n1 + n2, d1),
                         d1 / __gcd((n1 + n2), d1));
    }

    ll d = d1 > d2 ? d1 : d2;
    ll n = 1;
    if (d1 > d2) {
        n2 *= d1 / d2;
    } else {
        n1 *= d2 / d1;
    }
    n = n1 + n2;

    ll g = __gcd(n, d);
    n /= g;
    d /= g;
    return make_pair(n, d);
}

ll pw(ll a, ll b) {
    ll res = 1;
    for (ll i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}
pair<ll, ll> pw(pair<ll, ll> f, ll p) {
    if (p == 0) {
        return make_pair(1, 1);
    }
    return make_pair(pw(f.first, p), pw(f.second, p));
}

void solve() {
    string s;
    cin >> s;
    reverse(all(s));
    ll p = 1;
    pair<ll, ll> frac = make_pair((s[0] - '0'), 1);

    for (int i = 1; i < s.length(); i++) {
        ll v = (s[i] - '0');
        pair<ll, ll> r = mul(pw(make_pair(3, 2), p), v);
        frac = add(r, frac);
        p++;
    }
    if (frac.first >= frac.second) {
        cout << frac.first / frac.second;
        if (frac.first % frac.second) {
            cout << ' ' << frac.first % frac.second << "/" << frac.second;
        }
        cout << '\n';
    } else {
        if (frac.first == 0) {
            cout << 0 << '\n';
            return;
        }
        cout << "0 " << frac.first % frac.second << "/" << frac.second;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}