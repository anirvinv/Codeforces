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

        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int a = arr[0];
        int count1 = 1;
        int b;
        int count2 = 0;

        for (int j = 1; j < n; j++)
        {
            if (arr[j] != a)
            {
                b = arr[j];
                count2++;
            }
            else
            {
                count1++;
            }
        }
        int index = 1;
        if (count1 > count2)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == b)
                {
                    cout << index << endl;
                    break;
                }
                else
                {

                    index++;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == a)
                {
                    cout << index << endl;
                    break;
                }
                else
                {
                    index++;
                }
            }
        }
    }
}