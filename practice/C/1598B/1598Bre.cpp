#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n][5];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cin >> arr[j][k];
            }
        }
        int numDays = 0;
        int count = 0;
        vector<int> dayIndices;

        for (int k = 0; k < 5; k++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j][k] == 1)
                {
                    count++;
                }
            }
            if (count >= n / 2)
            {
                numDays++;
                dayIndices.push_back(k);
            }
        }

        // for (int j : dayIndices)
        // {
        //     cout << j << " ";
        // }
        // cout << endl;

        int dayCols[numDays][n];
        // populate this array by gathering the days that have more than n/2 students in them
        int row = 0;
        int col = 0;
        for (int k : dayIndices)
        {
            col = 0;
            for (int j = 0; j < n; j++)
            {
                dayCols[row][col] = arr[j][k];
                col++;
            }
            row++;
        }
        // cout << numDays << endl;
        // for (int j = 0; j < numDays; j++)
        // {
        //     for (int k = 0; k < n; k++)
        //     {
        //         cout << dayCols[j][k] << " ";
        //     }
        //     cout << endl;
        // }

        bool exists = false;
        for (int j = 0; j < numDays - 1 && !exists; j++)
        {
            for (int k = j + 1; k < numDays && !exists; k++)
            {
                for (int l = 0; l < n && !exists; l++)
                {
                    if (dayCols[j][l] + dayCols[k][l] < 1)
                    {
                        break;
                    }

                    if (l == n - 1)
                    {
                        exists = true;
                        break;
                    }
                }
            }
        }
        if (exists)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}