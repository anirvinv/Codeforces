#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int scores[n];
    int scp[n];
    fo(i, n)
    {
        int v1, v2, v3;
        cin >> v1 >> v2 >> v3;
        scores[i] = v1 + v2 + v3;
        scp[i] = scores[i];
    }

    sort(scores, scores + n);
    map<int, int> place;
    fo(i, n)
    {
        place[scores[i]] = n - i;
    }
    for (int i = 0; i < n; i++)
    {
        if (place[scp[i]] <= k)
        {
            cout << "Yes" << '\n';
        }
        else if (abs(scores[n - k] - scp[i]) <= 300)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
}