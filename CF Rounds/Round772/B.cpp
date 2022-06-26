#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];

    int lmax = 0;
    vector<ll> maxes;
    for (int i = 1; i < n - 1; i++) {
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
            maxes.push_back(i);
            lmax++;
        }
    }
    int count = 0;
    for (int i = 0; i < lmax - 1; i++) {
        if (maxes[i] + 2 == maxes[i + 1]) {
            arr[maxes[i] + 1] = (arr[maxes[i + 1]] > arr[maxes[i]])
                                    ? arr[maxes[i + 1]]
                                    : arr[maxes[i]];
            count++;
            i++;
        }
    }
    for (int i = 1; i < n - 1; i++) {
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
            arr[i] = (arr[i + 1] > arr[i - 1]) ? arr[i + 1] : arr[i - 1];
            count++;
        }
    }
    cout << count << '\n';
    for (int e : arr) {
        cout << e << " ";
    }
    cout << '\n';
    // find adjacent local maxes
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