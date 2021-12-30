#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n;
        cin >> c;
        cin >> s;
        vector<int> indices;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
            {
                indices.push_back(i + 1);
            }
        }
        sort(indices.begin(), indices.end());

        bool allOdd = true;
        for (int i = 0; i < indices.size(); i++)
        {
            if (indices[i] % 2 == 0)
            {
                allOdd = false;
                break;
            }
        }

        bool divisible = false;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < indices.size(); j++)
            {
                if (indices[j] % i != 0)
                {
                    break;
                }
                if (j == indices.size() - 1)
                {
                    divisible = true;
                    break;
                }
            }
            if (divisible)
            {
                break;
            }
        }
        if (indices.size() == 0)
        {
            cout << 0 << endl;
        }
        else if (indices.size() == 1)
        {
            cout << 1 << endl;
            int ans;
            if (indices[0] == n)
            {
                ans = n - 1;
            }
            else
            {
                ans = indices[0] + 1;
            }
            cout << ans << endl;
        }
        else
        {
            bool special = false;
            int ans = 0;
            for (int i = n / 2; i < n; i++)
            {
                if (s[i] == c)
                {
                    special = true;
                    ans = i + 1;
                }
            }
            if (special)
            {
                cout << 1 << endl;
                cout << ans << endl;
            }
            else if (allOdd || divisible)
            {
                cout << 1 << endl;
                cout << indices[indices.size() - 1] - 1 << endl;
            }
            else
            {
                cout << 2 << endl;
                cout << n << " " << n - 1 << endl;
            }
        }
    }
}