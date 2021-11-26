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
    }
}