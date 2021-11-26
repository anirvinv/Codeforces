#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isConsecutive(int d1, int m1, int y1, int d2, int m2, int y2)
{
    d1 += 1;
    if (y1 % 4 == 0 && y1 % 100 != 0)
    {
        if (m1 <= 8)
        {
            if (m1 == 2)
            {
                if (d1 > 29)
                {
                    d1 = 1;
                    m1++;
                }
            }
            else if (m1 % 2 == 1 || m1 == 8)
            {
                if (d1 > 31)
                {
                    d1 = 1;
                    m1++;
                }
            }
            else
            {
                if (d1 > 30)
                {
                    d1 = 1;
                    m1++;
                }
            }
        }
        else
        {
            if (m1 % 2 == 0)
            {
                if (d1 > 31)
                {
                    d1 = 1;
                    m1++;
                }
            }
            else
            {
                if (d1 > 30)
                {
                    d1 = 1;
                    m1++;
                }
            }
        }
    }
    else
    {
        if (m1 <= 8)
        {
            if (m1 == 2)
            {
                if (d1 > 28)
                {
                    d1 = 1;
                    m1++;
                }
            }
            else if (m1 % 2 == 1 || m1 == 8)
            {
                if (d1 > 31)
                {
                    d1 = 1;
                    m1++;
                }
            }
            else
            {
                if (d1 > 30)
                {
                    d1 = 1;
                    m1++;
                }
            }
        }
        else
        {
            if (m1 % 2 == 0)
            {
                if (d1 > 31)
                {
                    d1 = 1;
                    m1++;
                }
            }
            else
            {
                if (d1 > 30)
                {
                    d1 = 1;
                    m1++;
                }
            }
        }
    }
    if (m1 > 12)
    {
        d1 = 1;
        m1 = 1;
        y1++;
    }
    return d2 == d1 && m2 == m1 && y2 == y1;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int arr[t][4];

        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> arr[i][j];
            }
        }
        int count = 0;
        int total = 0;
        for (int i = 0; i < t - 1; i++)
        {
            if (isConsecutive(arr[i][0], arr[i][1], arr[i][2], arr[i + 1][0], arr[i + 1][1], arr[i + 1][2]))
            {
                // cout << "consecutive: " << endl;
                // cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << " " << arr[i][3] << endl;
                // cout << arr[i + 1][0] << " " << arr[i + 1][1] << " " << arr[i + 1][2] << " " << arr[i + 1][3] << endl;
                total += (arr[i + 1][3] - arr[i][3]);
                count++;
            }
        }
        cout << count << " " << total << endl;
        cin >> t;
    }
}