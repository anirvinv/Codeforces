#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        vector<int> unique;
        map<int, int> occ;
        fo(i, n)
        {
            cin >> arr[i];
            occ[arr[i]]++;
        }

        for (int i : arr)
        {
            if (find(unique.begin(), unique.end(), i) == unique.end())
            {
                unique.push_back(i);
            }
        }
        int sum = unique.size();
        for (int j : unique)
        {
            if (occ[j] > 1 && occ[-1 * j] == 0)
            {
                sum++;
            }
        }

        cout << sum << '\n';
    }
}