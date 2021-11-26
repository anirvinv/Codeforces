#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int arr[9] = {5, 4, 6, 7, 2, 1, 2, 4, 6};
    int max = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // cout << max << endl;

    int map[max + 1];

    memset(map, 0, sizeof map);

    for (int i = 0; i < 9; i++)
    {
        map[arr[i]]++;
    }

    for (int i = 0; i < max + 1; i++)
    {
        for (int j = 0; j < map[i]; j++)
        {
            cout << i << " ";
        }
    }
}