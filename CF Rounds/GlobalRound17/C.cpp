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
        int arr[n][2];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }

        int ppl = 1;
        int maxricher = arr[0][0];
        for (int i = 1; i < n; i++)
        {

            if (ppl - i >= maxricher)
            {
                break;
            }
            else
            {
                maxricher = arr[i][0];
                if (arr[i][1] > ppl)
                {
                    ppl++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << ppl << endl;
    }
}