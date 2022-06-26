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

void swap(pair<ll, ll>& a, pair<ll, ll>& b) {
    pair<ll, ll> temp = a;
    a = b;
    b = temp;
}

void solve() {
    G(n);
    vector<ll> a(n);
    vector<ll> b(n);
    F(i, 0, n) cin >> a[i];
    F(i, 0, n) cin >> b[i];

    vector<pair<ll, ll>> ab(n);
    F(i, 0, n) {
        ab[i].first = a[i];
        ab[i].second = b[i];
    }
    vector<pair<int, int>> ij;
    FFE(i, n - 1, 1) {
        F(j, 0, i) {
            if (ab[j].first > ab[j + 1].first) {
                swap(ab[j], ab[j + 1]);
                ij.push_back({ j + 1, j + 2 });
            }
            else if (ab[j].first == ab[j + 1].first && ab[j].second > ab[j + 1].second) {
                swap(ab[j], ab[j + 1]);
                ij.push_back({ j + 1, j + 2 });
            }
        }
    }
    FFE(i, n - 1, 1) {
        F(j, 0, i) {
            if (ab[j].second > ab[j + 1].second && ab[j].first == ab[j + 1].first) {
                swap(ab[j], ab[j + 1]);
                ij.push_back({ j + 1, j + 2 });
            }
        }
    }

    F(i, 0, n - 1) {
        if (ab[i].second > ab[i + 1].second) {
            cout << "-1\n";
            return;
        }
    }
    cout << ij.size() << '\n';
    for (auto p : ij) {
        cout << p.first << " " << p.second << '\n';
    }

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