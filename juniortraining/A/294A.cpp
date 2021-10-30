#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int shots[m][2];
    for (int i = 0; i < m; i++)
    {
        cin >> shots[i][0];
        cin >> shots[i][1];
    }

    for (int i = 0; i < m; i++)
    {
        int line = shots[i][0] - 1;
        int bird = shots[i][1];

        if (line < n)
        {
            arr[line + 1] += arr[line] - bird;
        }
        if (line > 0)
        {
            arr[line - 1] += bird - 1;
        }
        arr[line] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}