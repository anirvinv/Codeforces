#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = s[j] - '0';
            }
        }
        bool val = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 1)
                {

                    if (j == n - 1)
                    {
                    }
                    else if (i == n - 1)
                    {
                    }
                    else
                    {
                        if (!(arr[i + 1][j] == 1 || arr[i][j + 1] == 1))
                        {
                            val = false;
                            // break;
                        }
                    }
                }
            }
        }
        if (val)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}