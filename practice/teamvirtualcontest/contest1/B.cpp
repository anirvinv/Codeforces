#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        char arr[n][n];
        int coord1[2];
        int coord2[2];

        int stars = 0;

        // copying the grid
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> arr[j][k];
                if (arr[j][k] == '*' && stars == 0)
                {
                    coord1[0] = j;
                    coord1[1] = k;
                    stars++;
                }
                else if (arr[j][k] == '*')
                {
                    coord2[0] = j;
                    coord2[1] = k;
                }
            }
        }

        //same row
        if (coord2[0] == coord1[0])
        {
            if (coord2[0] == 0)
            {
                arr[coord2[0] + 1][coord2[1]] = '*';
                arr[coord2[0] + 1][coord1[1]] = '*';
            }
            else
            {
                arr[coord2[0] - 1][coord2[1]] = '*';
                arr[coord2[0] - 1][coord1[1]] = '*';
            }
        }
        //same column
        else if (coord2[1] == coord1[1])
        {
            if (coord2[1] == 0)
            {
                arr[coord1[0]][coord2[1] + 1] = '*';
                arr[coord2[0]][coord1[1] + 1] = '*';
            }
            else
            {
                arr[coord1[0]][coord2[1] - 1] = '*';
                arr[coord2[0]][coord1[1] - 1] = '*';
            }
        }
        else
        {
            arr[coord1[0]][coord2[1]] = '*';
            arr[coord2[0]][coord1[1]] = '*';
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << arr[j][k];
            }
            cout << "\n";
        }
    }
}