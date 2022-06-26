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
        vector<int> arr(n);
        int indices[2 * n + 1];
        memset(indices, -1, sizeof indices);
        fo(i, n)
        {
            cin >> arr[i];
            indices[arr[i]] = i;
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int val = (2 * n - 1) / arr[i];

            for (int j = 1; j <= val; j++)
            {
                if (indices[j] != -1)
                {
                    int ind1 = i + 1;
                    int ind2 = indices[j] + 1;
                    if (ind1 < ind2 && (arr[i] * j == (ind1 + ind2)))
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }
}