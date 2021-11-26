#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    char safeArr[7] = {'I', 'E', 'H', 'O', 'V', 'A', '#'};
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        char arr[m][n];
        int begin[2];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '@')
                {
                    begin[0] = i;
                    begin[1] = j;
                }
            }
        }
        int safeIndex = 0;
        int current[2] = {begin[0], begin[1]};
        string path = "";
        while (safeIndex < 7)
        {
            char safe = safeArr[safeIndex];
            if (current[0] > 0 && arr[current[0] - 1][current[1]] == safe)
            {
                path += "forth ";
                current[0]--;
                safeIndex++;
            }
            if (current[1] > 0 && arr[current[0]][current[1] - 1] == safe)
            {
                path += "left ";
                current[1]--;
                safeIndex++;
            }
            if (current[1] < n && arr[current[0]][current[1] + 1] == safe)
            {
                path += "right ";
                current[1]++;
                safeIndex++;
            }
        }
        cout << path << endl;
    }
}