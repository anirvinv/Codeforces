#include <bits/stdc++.h>

using namespace std;

bool isSorted(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (!arr[i] <= arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, x;
        cin >> n >> x;
        int arr[n];
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int sorted[n];

        for (int j = 0; j < n; j++)
        {
            sorted[j] = arr[j];
        }
        sort(sorted, sorted + n);

        if (isSorted(n, arr))
        {
            cout << "YES" << endl;
        }
        else
        {

            bool exists = false;
            vector<int> indices;
            vector<int> missing;

            for (int j = 1; j <= n - x; j++)
            {
                indices.push_back(j);
                indices.push_back(j + x);
            }

            for (int j = 1; j <= n; j++)
            {
                if (!count(indices.begin(), indices.end(), j))
                {
                    missing.push_back(j);
                }
            }
            // cout << "MISSING ";
            // for (int j = 0; j < missing.size(); j++)
            // {
            //     cout << missing[j] << " ";
            // }
            // cout << endl;
            bool s = true;
            for (int j = 0; j < missing.size(); j++)
            {
                if (!(arr[j] == sorted[j]))
                {
                    s = false;
                    break;
                }
            }
            // cout << "SORTED";
            // for (int j = 0; j < n; j++)
            // {
            //     cout << sorted[j];
            // }
            if (s)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}