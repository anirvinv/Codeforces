#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y, n;

        cin >> x >> y >> n;
        int k = 0;
        for (int num = n; num > 0; num--)
        {
            if (num % x == y)
            {
                k = num;
                break;
            }
        }
        cout << k << endl
             << endl;
    }
}