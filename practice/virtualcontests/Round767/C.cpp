#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int occ[n + 1];
    memset(occ, 0, sizeof occ);
    fo(i, n) { cin >> arr[i]; }
    vector<int> suffixes;
    int ptr = n - 1;
    int mexPtr = 0;
    while (ptr >= 0) {
        occ[arr[ptr]]++;
        while (occ[mexPtr] > 0 && mexPtr <= n) {
            mexPtr++;
        }
        suffixes.push_back(mexPtr);
        ptr--;
    }
    reverse(all(suffixes));
    vector<int> mexs;

    ptr = 0;
    while (ptr < n) {
        memset(occ, 0, sizeof occ);
        int j = ptr;
        int target = suffixes[ptr];
        int currMex = 0;
        while (currMex < target) {
            occ[arr[j]]++;
            while (currMex != target && occ[currMex] > 0 && currMex <= n) {
                currMex++;
            }
            if (currMex == target) {
                break;
            }
            j++;
        }
        mexs.push_back(target);
        ptr = j + 1;
    }
    cout << mexs.size() << '\n';
    for (int e : mexs) {
        cout << e << " ";
    }
    cout << '\n';
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