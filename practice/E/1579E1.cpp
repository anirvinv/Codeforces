#include <bits/stdc++.h>
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
        for (int k = 0; k < n; k++)
        {
            cin >> arr[k];
        }
        int answer[n];
        answer[0] = arr[0];
        int count = 1;
        for (int j = 1; j < n; j++)
        {
            count++;
            if (arr[j] < answer[0])
            {
                int temp1 = answer[0];
                answer[0] = arr[j];

                int temp2 = answer[1];
                answer[1] = temp1;

                for (int k = 2; k < count; k++)
                {
                    if (k % 2 == 0)
                    {
                        temp1 = answer[k];
                        answer[k] = temp2;
                    }
                    else
                    {
                        temp2 = answer[k];
                        answer[k] = temp1;
                    }
                }
            }
            else
            {
                answer[j] = arr[j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            cout << answer[j] << " ";
        }
        cout << endl;
    }
}