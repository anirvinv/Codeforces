#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
ll fct(ll N) {
    ll res = 1;
    for (int i = 1; i <= N; i++) {
        res *= i;
    }
    return res;
}

void swap(ll& a, ll& b) {
    ll temp = a;
    a = b;
    b = temp;
}

bool eql(vector<pair<ll, ll>> a, vector<pair<ll, ll>> b) {
    F(i, a.size()) {
        if (a[i].first > a[i].second) {
            swap(a[i].first, a[i].second);
        }
        if (b[i].first > b[i].second) {
            swap(b[i].first, b[i].second);
        }
    }

    sort(all(a));
    sort(all(b));
    F(i, a.size()) {
        if (a[i].first + a[i].second != b[i].first + b[i].second) return false;
        if (a[i].first != b[i].first && a[i].first != b[i].second) return false;
    }
    return true;
}
bool cmp(vector<pair<ll, ll>> a, vector<pair<ll, ll>> b, vector<ll> perms) {
    ll mp[perms.size() + 1];
    for (int i = 0; i < perms.size(); i++) {
        mp[i + 1] = perms[i];
    }
    for (int i = 0; i < b.size(); i++) {
        b[i] = make_pair(mp[b[i].first], mp[b[i].second]);
    }
    return eql(a, b);
}

void solve() {
    G(N) G(M);
    vector<pair<ll, ll>> tk;
    vector<pair<ll, ll>> ak;

    vector<ll> perms(N);
    F(i, N) perms[i] = i + 1;

    F(i, M) {
        G(a) G(b);
        tk.push_back(make_pair(a, b));
    }
    F(i, M) {
        G(a) G(b);
        ak.push_back(make_pair(a, b));
    }
    for (int i = 0; i < fct(N); i++) {
        next_permutation(perms.begin(), perms.end());
        if (cmp(tk, ak, perms)) {
            cout << "Yes" << '\n';
            return;
        }
    }
    cout << "No" << '\n';
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