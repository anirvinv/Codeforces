#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        int begin[2];
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'I' || s[j] == 'E' || s[j] == 'H' || s[j] == 'O' || s[j] == 'V' || s[j] == 'A')
                {
                    arr[i][j] = 1;
                }
                else if (s[j] == '@')
                {
                    arr[i][j] = 2;
                    begin[0] = i;
                    begin[1] = j;
                }
                else if (s[j] == '#')
                {
                    arr[i][j] == 3;
                }
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        int current[2];
        current[0] = begin[0];
        current[1] = begin[1];
        string path = "";
        bool start = true;
        int count = 1;
        while (start || (arr[current[0]][current[1]] == 1 && count <= 8))
        {

            start = false;
            if (current[0] > 0 && (arr[current[0] - 1][current[1]] != 0))
            {
                current[0] -= 1;
                path += "forth ";
            }
            else if (current[1] < n - 1 && (arr[current[0]][current[1] + 1] != 0))
            {
                current[1] = current[1] + 1;
                path += "right ";
            }
            else if (current[1] > 0 && arr[current[0]][current[1] - 1] != 0)
            {
                current[1] = current[1] - 1;
                path += "left ";
            }
            count++;
        }
        cout << path << endl;
        cout << count << endl;
    }
}