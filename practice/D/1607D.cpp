#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool customSort(pair<char, ll> first, pair<char, ll> second) {
    if (first.first == second.first) {
        return first.second < second.second;
    }
    return first.first < second.first;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    fo(i, n) cin >> arr[i];
    string br;
    cin >> br;
    vector<pair<char, ll>> A(n);
    set<int> s;
    for (int i = 1; i <= n; i++) {
        s.insert(i);
    }
    for (int i = 0; i < n; i++) {
        A[i] = make_pair(br[i], arr[i]);
    }
    sort(all(A), customSort);
    reverse(all(A));

    int ptr = 0;
    while (ptr < n) {
        if (A[ptr].first == 'B') {
            break;
        }
        auto iter = s.end();
        iter--;
        int val = (*iter);
        if (A[ptr].second > val) {
            cout << "NO" << '\n';
            return;
        }
        s.erase(iter);
        ptr++;
    }
    while (ptr < n) {
        auto iter = s.end();
        iter--;
        int val = (*iter);
        if (A[ptr].second < val) {
            cout << "NO" << '\n';
            return;
        }
        s.erase(iter);
        ptr++;
    }
    cout << "YES" << '\n';
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