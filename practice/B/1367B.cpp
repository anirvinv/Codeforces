#include <iostream>

using namespace std;

int main()
{

    int t;

    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;

        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int evens = 0;
        int odds = n / 2;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
                evens++;
        }

        if (odds > evens || odds < evens - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int wrongevens = 0;
            int wrongodds = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 == 0 && j % 2 != 0)
                {
                    wrongevens++;
                }
                else if (arr[j] % 2 == 1 && j % 2 == 0)
                {
                    wrongodds++;
                }
            }
            if (wrongevens == wrongodds)
            {
                cout << wrongevens << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}