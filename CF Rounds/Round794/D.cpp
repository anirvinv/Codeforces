#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
bool customSort(pair<string, ll> a, pair<string, ll> b) {
    return a.second < b.second;
}
void solve() {
    G(a1) G(b1) G(c1) G(d1);
    string s;
    cin >> s;
    int n = s.length();
    pair<string, ll> a = {"A", 0}, b = {"B", 0}, ab = {"AB", 0}, ba = {"BA", 0};
    F(i, n) { a.second += s[i] == 'A'; }
    F(i, n) { b.second += s[i] == 'B'; }
    F(i, n - 1) { ab.second += s.substr(i, 2) == "AB"; }
    F(i, n - 1) { ba.second += s.substr(i, 2) == "BA"; }
    vector<pair<string, ll>> parts = {a, b, ab, ba};
    sort(all(parts), customSort);
    F(i, 4) {
        if (parts[i].first == "A") {
            parts[i].second = a1;
        }
    }
    F(i, 4) {
        if (parts[i].first == "B") {
            parts[i].second = b1;
        }
    }
    F(i, 4) {
        if (parts[i].first == "AB") {
            parts[i].second = c1;
        }
    }
    F(i, 4) {
        if (parts[i].first == "BA") {
            parts[i].second = d1;
        }
    }
    set<int> used;
    F(i, 4) {
        int length = parts[i].first.length();
        F(j, n - length + 1) {
            bool go = false;
            if (length == 2) {
                go = used.find(j) == used.end() &&
                     used.find(j + 1) == used.end();
            } else {
                go = used.find(j) == used.end();
            }
            if (go) {
                if (s.substr(j, length) == parts[i].first) {
                    parts[i].second--;
                    used.insert(j);
                    if (length == 2) {
                        used.insert(j + 1);
                    }
                    j += length - 1;
                }
            }
        }
    }
    F(i, 4) {
        if (parts[i].second != 0) {
            cout << "NO\n";
            return;
        }
        // cout << parts[i].first << " " << parts[i].second << '\n';
    }
    cout << "YES\n";
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