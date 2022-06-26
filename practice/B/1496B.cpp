#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

int OP(vector<int> arr)
{
    // assume sorted
    int ma = arr[arr.size() - 1];
    int me = ma + 1;
    if (arr[0] != 0)
    {
        me = 0;
    }
    else
    {
        fo(i, arr.size() - 1)
        {
            if (arr[i + 1] - arr[i] > 1)
            {
                me = arr[i] + 1;
                break;
            }
        }
    }

    return (me + ma + 1) / 2;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    fo(i, n)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    vector<int> unique;
    for (int e : s)
    {
        unique.push_back(e);
    }
    int ma = unique[unique.size() - 1];
    int me = ma + 1;
    if (unique[0] != 0)
    {
        me = 0;
    }
    else
    {
        fo(i, unique.size() - 1)
        {
            if (unique[i + 1] - unique[i] > 1)
            {
                me = unique[i] + 1;
                break;
            }
        }
    }

    if (me == ma + 1)
    {
        cout << k + unique.size() << '\n';
        return;
    }
    else
    {
        fo(i, k)
        {
            int e = OP(unique);
            if (find(all(unique), e) != unique.end())
            {
                cout << unique.size() << '\n';
                return;
            }
            else
            {
                unique.push_back(e);
                sort(all(unique));
            }
        }
        cout << unique.size() << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}
