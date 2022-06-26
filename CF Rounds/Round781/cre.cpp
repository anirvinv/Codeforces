#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void display(vector<pair<ll, bool>> v) {
    for (pair<ll, ll> e : v) {
        cout << e.first << " ";
    }
    cout << '\n';
}
bool cs(pair<ll, bool> a, pair<ll, bool> b) { return a.first > b.first; }
void solve() {
    G(n);
    vector<ll> a(n);
    map<ll, ll> mp;
    F(i, n - 1) {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<pair<ll, bool>> b;
    ll sum = 0;
    b.push_back(make_pair(1, 0));
    for (auto i = mp.begin(); i != mp.end(); ++i) {
        b.push_back(make_pair(i->second, 0));
        sum += i->second;
    }
    // root
    int ans = 0;
    int zeroes = 0;

    // 90 80
    // 89 80 inject g1
    // 88 79 inject g2
    //

    while (sum != 0) {
        // spread
        bool non_infected = false;
        for (pair<ll, bool> &p : b) {
            non_infected |= !p.second;
            if (p.second && p.first) {
                p.first--;
                sum--;
            }
            if (p.second == 0) {
                zeroes++;
            }
        }
        if (sum == 0) break;
        if (b.size() > 1) {
            sort(all(b), cs);
        }
        // debug(zeroes);
        // display(b);
        if (zeroes) {
            F(i, zeroes) { a.pop_back(); }
            zeroes = 0;
        }
        bool found = 0;
        if (non_infected) {
            for (pair<ll, bool> &p : b) {
                if (!p.second) {
                    p.first--;
                    p.second = 1;
                    sum--;
                    found = 1;
                    break;
                }
            }
        }
        if (!found) {
            b[0].first--;
            sum--;
        }
        ans++;
    }
    cout << ans + 1 << '\n';
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