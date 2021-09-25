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

        int val = (n / x) * x + y;
        while (val > n)
        {
            val -= x;
        }

        cout << val << endl;
    }
}