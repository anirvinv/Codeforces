#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool customSort(pair<vector<ll>, ll> a, pair<vector<ll>, ll> b) {
    return a.second < b.second;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<vector<ll>, ll>> arr;
    fo(i, n) {
        ll k;
        cin >> k;
        vector<ll> a(k);
        ll mp = -1;
        ll fp = 0;

        fo(j, k) {
            cin >> a[j];
            mp = max({mp, a[j] - j + 1, 0ll});
        }
        arr.push_back(make_pair(a, mp));
    }
    sort(all(arr), customSort);

    ll mp = arr[0].second;
    ll elements = arr[0].first.size();
    ll fp = mp + elements;
    for (int i = 1; i < arr.size(); i++) {
        if (fp < arr[i].second) {
            mp += arr[i].second - fp;
        }
        elements += arr[i].first.size();
        fp = mp + elements;
    }
    cout << mp << '\n';
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