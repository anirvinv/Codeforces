#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool isSorted(vector<ll> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];
    if (arr[n - 1] < arr[n - 2]) {
        cout << -1 << '\n';
        return;
    }
    if (isSorted(arr)) {
        cout << 0 << '\n';
        return;
    }

    if (arr[n - 2] - arr[n - 1] <= arr[n - 2]) {
        cout << n - 2 << '\n';
        for (int i = 0; i < n - 2; i++) {
            cout << i + 1 << " " << n - 1 << " " << n;
            cout << '\n';
        }
    } else {
        cout << -1 << '\n';
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