#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int count = 0;

    int n;
    cin >> n;
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                continue;
            }
            else
            {
                if (arr[i][0] == arr[j][1])
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}