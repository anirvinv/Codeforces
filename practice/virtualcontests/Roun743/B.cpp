#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];

        for (size_t j = 0; j < n; j++)
        {
            cin >> arr1[j];
        }
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr2[j];
        }

        int minSum = 2 * n;

        for (int j = 0; j < n; j++)
        {

            for (int k = 0; k < n; k++)
            {

                if ((arr1[j] < arr2[k]) && (j + k) < minSum)
                {
                    minSum = j + k;
                }
            }
        }
        cout << minSum << endl;
    }
}