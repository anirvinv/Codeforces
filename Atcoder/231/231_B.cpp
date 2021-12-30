#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    unordered_map<string, int> votes;
    while (t--)
    {
        string s;
        cin >> s;
        votes[s]++;
    }
    string maxV = votes.begin()->first;
    int mV = votes.begin()->second;

    for (auto iter = votes.begin(); iter != votes.end(); ++iter)
    {
        if (mV < iter->second)
        {
            maxV = iter->first;
            mV = iter->second;
        }
    }
    cout << maxV << endl;
}