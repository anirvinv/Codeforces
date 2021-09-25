#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        int steps = 0;
        while (n != 1)
        {
            if (!(n % 3 == 0))
            {
                steps = -1;
                break;
            }
            else if (n % 6 == 0)
            {
                n /= 6;
            }
            else
            {
                n *= 2;
            }
            steps++;
        }
        cout << steps << endl;
    }
}