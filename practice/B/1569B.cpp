#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string arr[n][n];
        for (int i = 0; i < n; i++)
        {
            arr[i][i] = 'X';
        }
        vector<int> draws;
        vector<int> notDraws;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                draws.push_back(i);
            }
            else
            {
                notDraws.push_back(i);
            }
        }

        for (int i = 0; i < draws.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[draws[i]][j] == "X")
                {
                }
                else
                {
                    arr[draws[i]][j] = "=";
                    arr[j][draws[i]] = "=";
                }
            }
        }
        // now alternate
        for (int i = 0; i < notDraws.size(); i++)
        {
            int count = 0;
            for (int j = notDraws[i] + 1; j < n; j++)
            {
                if (find(draws.begin(), draws.end(), j) == draws.end())
                {
                    if (count % 2 == 0)
                    {
                        arr[notDraws[i]][j] = "+";
                        arr[j][notDraws[i]] = "-";
                    }
                    else
                    {
                        arr[notDraws[i]][j] = "-";
                        arr[j][notDraws[i]] = "+";
                    }
                    count++;
                }
            }
        }

        bool check = true;
        for (int i = 0; i < notDraws.size(); i++)
        {
            int count;
            for (int j = 0; j < n; j++)
            {
                if (arr[notDraws[i]][j] == "+")
                {
                    break;
                }
                if (j == n - 1)
                {
                    check = false;
                    break;
                }
            }
            if (!check)
            {
                break;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j];
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}