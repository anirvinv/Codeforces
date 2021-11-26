#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int steps = 0;
        int updatedIndex = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > updatedIndex)
            {
                int val = arr[i] - (updatedIndex);
                steps += val;
                updatedIndex = arr[i] + 1;
            }
            else
            {
                updatedIndex++;
            }
        }
        cout << steps << endl;
    }
}